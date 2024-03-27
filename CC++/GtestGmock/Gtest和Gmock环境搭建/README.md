# googletest 和 googlemock 的环境搭建

---

在很久以前, **googletest** ( 后面简称 gtest ) 和 **googlemock** ( 后面简称 gmock ) 仓库还没有合并, 他们分别对应 Github 的不同仓库, 不过现在他们都合并到了 gtest 仓库

- [ gtest 的 Github 仓库](https://github.com/google/googletest/tree/master)

现在我来教大家如何搭建 gtest 和 gmock 的环境

---

## 下载 gtest 源码

- 执行以下命令下载 gtest 的源码 ( 我使用 `release-1.10.0` 版本 )

    ```shell
    git clone --branch release-1.10.0 https://github.com/google/googletest.git
    ```

## 编译配置

- 进入下载的目录 ( 我的目录是 googletest-release-1.10.0 ) ( 注意: 根据实际情况  `cd + 目录名` )

    ```shell
    cd googletest-release-1.10.0
    ```

- 依次执行以下命令生成所需要的文件

    ```shell
    sudo cmake CMakeLists.txt
    sudo make
    ```

- 拷贝链接文件

    ```shell
    sudo cp lib/*.a /usr/lib
    ```

- 拷贝include文件

    ```shell
    sudo cp -a googletest/include/gtest/ /usr/include/
    sudo cp -a googlemock/include/gmock/ /usr/include/
    ```

- 到此为止, 你就就装好 **gtest** 和 **gmock** 了 !

---

## 验证

- 验证稍微复杂一点, 因为你要编写一个源代码去验证
- 首先你得有 C/C++ 的编译环境 ( 这儿不详细描述 )

---

### 验证 gtest

- 新建 `test_gtest.cpp` 文件, 内容如下

    ```c
    #include <iostream>
    #include<gtest/gtest.h>

    using namespace std;

    class test_gtest : public testing::Test
    {
    protected:
        static void SetUpTestCase()
        {
            cout << "> Before each test case are executed" << endl;
        }
        static void TearDownTestCase()
        {
            cout << "> After each test case are executed" << endl;
        }
        virtual void SetUp()
        {
            cout << "> Before all test cases are executed" << endl;
        }
        virtual void TearDown()
        {
            cout << "> After all test cases are executed" << endl;
        }
    };

    int main(int argc,char **argv)
    {
        testing::GTEST_FLAG(output) = "xml:";   // save xml
        testing::InitGoogleTest(&argc,argv);
        return RUN_ALL_TESTS();
    }

    /* return a + b */
    int add(int a, int b)
    {
        return a + b;
    }

    TEST_F(test_gtest, test0)
    {
        EXPECT_EQ(add(3, 4), 7) << "> add() error";
    }
    ```

- 执行一下命令编译 生成可执行文件 `test_gtest.bin`

    ```shell
    g++ test_gtest.cpp -lgtest -lpthread -o test_gtest.bin
    ```

- 执行程序

    ```shell
    ./test_gtest.bin
    ```

- 最后打印如下信息, 那说明 **gtest** 配置正确

    ```shell
    [==========] Running 1 test from 1 test suite.
    [----------] Global test environment set-up.
    [----------] 1 test from test_gtest
    > Before each test case are executed
    [ RUN      ] test_gtest.test0
    > Before all test cases are executed
    > After all test cases are executed
    [       OK ] test_gtest.test0 (0 ms)
    > After each test case are executed
    [----------] 1 test from test_gtest (0 ms total)

    [----------] Global test environment tear-down
    [==========] 1 test from 1 test suite ran. (1 ms total)
    [  PASSED  ] 1 test.
    ```
---

### 验证 gmock

- 新建 `test_gmock.cpp` 文件, 内容如下

    ```c
    #include <string>
    #include <gmock/gmock.h>
    #include <gtest/gtest.h>
    #include <memory>
    #include <iostream>
    using namespace std;
    using namespace testing;

    class Student
    {
        public:
        virtual ~Student() {}
        virtual int getAge(string name) = 0;
    };

    class MockStudent : public Student
    {
        public:
        MOCK_METHOD1(getAge, int(string name));
    };

    int main(int argc, char **argv)
    {
        testing::InitGoogleMock(&argc, argv);
        return RUN_ALL_TESTS();
    }

    TEST(test_gmock, test0)
    {
        MockStudent XiaoMing;
        EXPECT_CALL(XiaoMing, getAge(_))
            .Times(AtLeast(3))
            .WillOnce(Return(18))
            .WillRepeatedly(Return(19));

        cout << "2020-02-03 : " << XiaoMing.getAge("XiaoMing") << endl;
        cout << "2020-02-04 : " << XiaoMing.getAge("XiaoMing") << endl;
        cout << "2020-02-05 : " << XiaoMing.getAge("XiaoMing") << endl;
        cout << "2020-02-06 : " << XiaoMing.getAge("XiaoMing") << endl;
        cout << "2020-02-07 : " << XiaoMing.getAge("XiaoMing") << endl;
    }
    ```

- 执行一下命令编译 生成可执行文件 `test_gmock.bin`

    ```shell
    g++ test_gmock.cpp -lgmock -lgtest -lpthread -o test_gmock.bin
    ```

- 执行程序

    ```shell
    ./test_gmock.bin
    ```

- 最后打印如下信息, 那说明 **gmock** 配置正确

    ```shell
    [==========] Running 1 test from 1 test suite.
    [----------] Global test environment set-up.
    [----------] 1 test from test_gmock
    [ RUN      ] test_gmock.test0
    2020-02-03 : 18
    2020-02-04 : 19
    2020-02-05 : 19
    2020-02-06 : 19
    2020-02-07 : 19
    [       OK ] test_gmock.test0 (0 ms)
    [----------] 1 test from test_gmock (0 ms total)

    [----------] Global test environment tear-down
    [==========] 1 test from 1 test suite ran. (0 ms total)
    [  PASSED  ] 1 test
    ```

---

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
