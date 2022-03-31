//
//  stack.h
//  hello
//
//  Created by dubudiu on 2022/3/30.
//

#ifndef stack_h
#define stack_h
#define MAXSTACK 10
#define OK 1
#define ERROR 0

#include <stdlib.h>     // 执行 malloc   函数需要该库
#include <stdio.h>      // 执行 printf() 函数需要该库


typedef char SElmtType;
typedef struct Stack{
    SElmtType *base;
    SElmtType *top;
    int stacksize;
}SqStack;

#endif /* stack_h */
