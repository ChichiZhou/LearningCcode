#include <stdio.h>
// 字符串的相关操作
// 日历提醒
// 核对行星名字
int main() {
    char *result = "abc";      // 可用指针操作字符串
    printf("The first character is %char\n", result[0]);
    printf("%s\n", result);     // 传入指针
    printf("%d\n",1);           // 传入数字

    /*字符串变量*/
    char date[8] = "June 14";     // 这里 date 是字符串变量。这里数组的长度允许比字符串字面常量要长或者大于1.但是不能相等或者小。
                                  // 因为相等或者小于则无法存储 \0
    char date4[] = "May 4";       // 可以省略

    /*写入字符串*/
//    char *strPointer="a";         // 问题：指针如何初始化 ？？？？？ 所有的数组都不能
//    scanf("%s", strPointer);
//    printf("The input string is %s\n", strPointer);

    int numberOne, numberTwo;      // 单个的数是可以的。但是数组是不行的。原因可能是数组名都是指针。问题：为什么只有数组名才是指针？？变量名为什么就不是指针？？？
    numberOne = 1;
    numberTwo = numberOne;
    printf("numberTwo is %d", numberTwo);

    char strArray[10];
    scanf("%s", strArray);
    printf("The input string is %s\n", strArray);




    return 0;
}
