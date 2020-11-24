#include <stdio.h>

int main() {
    int inputValue;
    scanf("%d", &inputValue);
    printf("表达式的值: %d", inputValue * inputValue * inputValue);
    float fnumber = 8.9f;  // 定义浮点数的时候，要在后面加 f
    int test1,test2;
    float test3, test4;
    scanf("%d%d%f%f",&test1, &test2, &test3, &test4);
    printf("The input is %d %d %f %f", test1, test2, test3, test4);    // 可以用不同的方式做输入 1       -20			.3			4.0e3
    int test5, test6;
    scanf("%d,%d",&test5, &test6);
    printf("Use comma in scanf %d, %d", test5, test6);  // 这里的输出是 3,40 ？？？ 不知道为什么？？？
    return 0;
}
