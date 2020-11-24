#include <stdio.h>
// 测试指针和数组的关系
/*指针与数组的基本操作
 * 数列反向*/
void setValue(int []);

int main() {
    /*指向复合常量的指针*/
    int *p = (int[]){1,2,3,4};
    printf("The first element is %d\n", *(p+1));    // 这样做更简洁一些 这里加的常数表示后移的位数（后续会有不同的说法，这个1有可能代表一个长度），而不表示字节

    /*数组名作为指针*/
    int a[10];
    printf("The first element is %d\n", *a);       // a 表示第一个元素的地址
    for (int i = 0; i < 10; i++){
        printf("The %d elementi is %d \n", *(a+i));    // 注意，这里不能用 a++。 a 作为数组名，是不能变的。
    }

    /*数组作为实参数传递*/
    setValue(a);
    printf("The first element of a is %d\n", a[0]);  // 这里将数组传递进去之后，对数组的改动影响了原来的数组。
                                                    // 数组在函数中不会被复制。从另一个角度看，这里传递的数组名，其实就是指向数组的指针


    /*测试：一个指向定长数组的指针。这里的数组都是多维数组*/
    // C 语言认为二维数组也是一维数组，只是每个元素又是一个一维数组
    int multiArray[2][2], (*pArray)[2];
    for(pArray = &multiArray[0]; pArray < &multiArray[2]; pArray++){
        (*pArray)[0] = 99;                          // 这里增加 1，表示的不是位置移动 1 位，而是移动若干位
    }
    printf("The 0 column is %d\n", multiArray[0][0]);

    /*使用多维数组名作为指针*/
    // 由于每个元素又是一个一维数组，所以上面代码可改写成如下
    for(int (*newPArray)[2] = multiArray; newPArray < multiArray + 2; newPArray++){
        (*newPArray)[0] = 98;
    }
    printf("The 0 column is %d\n", multiArray[0][0]);







    return 0;
}

void setValue(int a[]){
    a[0] = 100;
}
