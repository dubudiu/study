//
//  main.c
//  hello
//
//  Created by dubudiu on 2022/3/31.
//

#include <stdio.h>
#include "study/stack.c"


void stackMain(void){
    SqStack sqStack;
        initStack(&sqStack);
        push(&sqStack, 'A');
    
        while (!stackEmpty(&sqStack)) {
            SElmtType e;
            pop(&sqStack, &e);
            printf("%c ", e);
        }
}

int main(int argc, const char * argv[]) {
    // 栈
    stackMain();
    
    
    return 0;
}
