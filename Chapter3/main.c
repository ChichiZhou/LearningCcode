#include <stdio.h>

int main() {
    // 转换说明符：以 % 开始的字符。但是 %d 只能填进去 int， %f 只能填进去 float。这里无法进行强转
    /************************************************/
    /* 测试1：变量在声明之后是否会分配内存空间
     * 测试方法：打印刚声明的量
     * 测试结果：会分配*/
    int inputValue, inputValue2;         // 这里虽然是声明，但是已经为 inputValue2 分配了内存空间。如果打印 inputValue2 的值，会显示 32766
    printf("The origin value for inputValue2 is %d", inputValue2);    // 打印结果是 32766
    /************************************************/

    /************************************************/
    /*测试2：scanf格式串紧缩会产生什么影响
     * 测试方法：采用4种方式执行 scanf
     * 测试结果：如果没有特殊符号，输入之间可以用空格进行分隔。空格的个数不限。如果有别的字符，那么需要将这个字符原封不动的当成输入内容*/
    // 紧缩
    scanf("%d%d", &inputValue, &inputValue2);    // 这里虽然是紧挨的，但是输入之间仍然需要空格或者换行符隔开。比如输入1 2，不能变成12
    printf("inputValue is %d\n", inputValue);
    printf("inputValue2 is %d\n", inputValue2);
    // 带空格
    scanf("%d %d", &inputValue, &inputValue2);
    // 使用换行符，制表键，空格
    int test1,test2;
    float test3, test4;
    scanf("%d%d%f%f",&test1, &test2, &test3, &test4);
    printf("The input is %d %d %f %f", test1, test2, test3, test4);    // 可以用不同的方式做输入 1       -20			.3			4.0e3
    // 使用逗号
    int test5, test6;
    scanf("%d,%d",&test5, &test6);
    printf("Use comma in scanf %d, %d", test5, test6);  // 这里必须有 ',' 才能保证会被成功识别
    /************************************************/

    /************************************************/
    /*测试3：scanf 中 %.3f 数字的作用
     * 测试方法：直接打印
     * 测试结果：数字表示能够显示多少位*/
    float fnumber = 8.9f;  // 定义浮点数的时候，要在后面加 f
    printf("显示小数点后三位小数 %.3f\n", fnumber);    // 这里设定了小数点后显示多少位小数。这里表示显示3位
    printf("显示4位整数 %4d\n ", inputValue);        // 显示整数。不足的位置补成空格
    /************************************************/

    return 0;
}
