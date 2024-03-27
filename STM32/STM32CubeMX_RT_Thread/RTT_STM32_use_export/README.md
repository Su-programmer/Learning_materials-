# RT-Thread—STM32—使用系统初始化

---

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---

## 概述
本教程添加新的模板,并且讲解系统的初始化接口,使的程序高内聚低耦合。

---
## 使用系统API
在RT-Thread系统中对各启动流程做了规范的定义详情请参考 [RT-Thread API参考手册](https://www.rt-thread.org/document/api/group___system_init.html#details)
使用系统的API我们就可以使用系统的函数将自己的线程导入到系统之中,这样就大大增加了程序模块的可重用性。

## 使用API创建例程
程序如下
* m_test.c
```
#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include "m_test.h"

/* 线程函数 */
void thread_test_entry(void *param)
{
    while(1)
    {
        rt_kprintf("Hello world!\n");
        rt_thread_mdelay(1000);
    }
}


/* 创建函数 */
static int m_test_sample(void)
{
    /* 初始化 */
    rt_thread_t tid_test = rt_thread_create(
                            "thread_led",
                            thread_test_entry,
                            RT_NULL,
                            256,
                            27,
                            5);
    if (tid_test != RT_NULL)
    {
        rt_thread_startup(tid_test);                //创建测试线程
    }
    return RT_EOK;
}

INIT_APP_EXPORT(m_test_sample);                        //应用初始化
```

---

## 说明
这里采用```INIT_APP_EXPORT```初始化应用，进入```m_test_sample```,在里面创建```thread_test_entry```线程。
以后添加新的模块，就直接添加```xxx.c```和```xxx.h``` 文件就行了。
## 备注
这里只是用了```INIT_APP_EXPORT```除此之外还有```INIT_APP_EXPORT``` ```INIT_ENV_EXPORT``` ```INIT_COMPONENT_EXPORT```...
详情请参考 [RT-Thread API参考手册](https://www.rt-thread.org/document/api/group___system_init.html#details)

---

## 源代码获取

**<font size=5 color=#ff0000> 源码已放到码云 ! ! ! ( 请点击文首链接进入仓库 ) </font>**

---

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
