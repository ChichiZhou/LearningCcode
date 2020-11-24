#include <stdio.h>
#include <stdlib.h>     // malloc 等函数在这个头文件中定义
#include <memory.h>

// 指针的高级应用
// 一个月的提醒列表
// 数据结构：链表

char *concat(const char *char1, const char *char2);

int main() {
    /*动态存储分配*/
    /*测试malloc calloc realloc
     *这里分配的是元素的个数（并不需要深入到字节这种程度）
     *这里相当于得到一个指针，而且这个指针有连续10个空间*/
    int *p = malloc(10);
    for (int i = 0; i < 10; i++){
        *(p+i) = i * 10;
        printf("The %d element is %d\n", i, *(p+i));
    }
    char *result = concat("abc", "def");
    printf("The concat string is %s", result);        // 打印字符串，直接用指针？？！！

    /*动态分配数组*/
    // 使用 malloc
    int *array;
    int numberOfElements;
    array = malloc(numberOfElements * sizeof(int));     // 这里要计算一共需要多少个字节。而字符串不需要计算，因为一个字符就是一个字节
    for (int i = 0; i < numberOfElements; i++){
        array[i] = i * 10;
        printf("The element is %d", array[i]);               // 因为数组名可以作为指针，所以指针也可以作为数组名
    }
    // 使用 calloc
    struct point {int x, y;} *structPointer;
    structPointer = calloc(1, sizeof(struct point));
    // 使用 realloc
    structPointer = realloc(structPointer, 3 * sizeof(struct point));      // realloc 必须指向那些通过 malloc 或者 calloc 得到内存空间的块



    return 0;
}



char *concat(const char *s1, const char *s2){
    char *result;
    result = malloc(strlen(s1) + strlen(s2) + 1);
    if (result == NULL){
        printf("This is error !!!");
        exit(EXIT_FAILURE);        // 这里有点意思，其实是可以抛出异常的
    } else {
        strcpy(result, s1);
        strcat(result, s2);
    }

    return result;
}                                 // 在调用的时候，直接传入字符串。此时相当于隐式写出了 char *s1 = "abc"
