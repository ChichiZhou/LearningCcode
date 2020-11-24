#include <stdio.h>
// 为了测试指针及其操作
/*指针的声明及应用
 * 找出最大值和最小值
 * */
void addOne(int *i);
int main() {
    /*测试：使用指针作为参数*/
    /********************/
    int initialValue = 0;
    addOne(&initialValue);
    printf("The changed value is %d",initialValue);
    /********************/

    /*测试：使用指针作为返回值*/
    /********************/

    return 0;
}

void addOne(int *i){
    *i+= 1;  // 这里只能用 *i+=1 不能用 *i++
}
