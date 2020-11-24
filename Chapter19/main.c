#include <stdio.h>
#include "find.h"
// 如何引用其它源文件中函数

int main() {
    /*另一个文件为 find
     *创建 find.c 和 find.h
     *在 find.c 中 #include "find.h"
     *在 find.h 中声明 int findMax(void);
     *在 find.c 中实现 int findMax(void)
     *在 main() 中 #include "find.h"
     *在 main() 中直接调用 findValue*/
    int a = findValue();
    return 0;
}
