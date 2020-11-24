#include <stdio.h>
#include <stdbool.h>

/*
 * 利用外部变量实现栈
 * 静态局部变量
 * 静态全局变量
 * 猜数程序
 * 抓牌程序
 * switch 语句*/

int addNumber(void);

int main() {
    /*测试1：静态局部变量的使用
     *测试方法：反复调用函数*/
    addNumber();
    addNumber();
    addNumber();
    return 0;
}

int addNumber(void){
    int static i;      // 这里只是声明，而没有另外分配存储空间
    if (i == 0){
        i = 0;
    }                  // 这里作为是为了防止改变 i 的值
    printf("%d\n", i);
    i++;
    return 0;
}
