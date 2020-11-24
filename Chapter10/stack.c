//
// Created by He Zhou on 11/24/20.
// 目的在于实现 stack
// 现存问题：不知道怎么把这个 stack 应用到 main 里面
//

#include "stack.h"
#include <stdbool.h>
#include <stdio.h>
#define STACK_SIZE 100
int content[STACK_SIZE];
int top = 0;

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top == STACK_SIZE;
}

void make_empty(void){
    top = 0;
}

void push(int i){
    if (is_full()){
        printf("Stack Overflow\n");
    } else {
        content[top++] = i;
    }
    return;
}

int pop(void){
    if (is_empty()){
        printf("Stack underflow\n");
    } else {
        return content[--top];        // 注意这里是 --top !!!
    }
}


