//
//  stack.c
//  hello
//
//  Created by dubudiu on 2022/3/30.
//

#include "stack.h"

/**
    初始化顺序栈
 */ 
int initStack(SqStack *S){
    S->base = (SElmtType *)malloc(sizeof(SElmtType) * MAXSTACK);
    S->top = S->base;
    S->stacksize = MAXSTACK;
    return OK;
}

/**
    判断栈是否为空
 */
int stackEmpty(SqStack *S){
    if(S->top == S->base)
        return OK;
    else
        return ERROR;
}

/**
    获取顺序栈长度
 */
long stackLength(SqStack S){
    return S.top - S.base;
}

/**
    清空一个栈
 */
int cleanStack(SqStack *S){
    if(S->base){
        S->base = S->top;
    }
    return OK;
}

/**
    销毁栈
 */
int destoryStack(SqStack *S){
    if(S->base){
        S->top = S->base = NULL;
        S->stacksize = 0;
    }
    return OK;
}

/**
    进栈
 */
int push(SqStack *S,SElmtType e){
    if(S->top - S->base == S->stacksize){
        return ERROR;
    }
    *(S->top++) =e;
    return OK;
}

/**
    出栈
 */
int pop(SqStack *S,SElmtType *e){
    if(S->top == S->base){
        return ERROR;
    }
    *e = *(--(S->top));
    return OK;
}


int main() {
    SqStack sqStack;
    initStack(&sqStack);
    push(&sqStack, 'A');
    
    while (!stackEmpty(&sqStack)) {
        SElmtType e;
        pop(&sqStack, &e);
        printf("%c ", e);
    }
    return 0;
}
