#include <stdio.h>

/**
 * @brief   描述
 *
 * @param   argc        参数的个数
 * @param   argv        参数值
 * @return  int
 */
int main(int argc, char *argv[])
{
    printf("argc =  %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] =  %s\n", i, argv[i]);
    }
}
