//
//  simplestack.cpp
//  CtCI5
//
//  Created by Terry on 2016/6/20.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "simplestack.hpp"
#include <string.h>

SimpleStack::SimpleStack() {
    ClearStack();
}
SimpleStack::~SimpleStack() {
    
}

void SimpleStack::Push(int indata) {
    if (top == MAX_STACK_LEN - 1) {
        printf("stack is full\n");
        return;
    }
    top++;
    data[top] = indata;
}

void SimpleStack::Pop(int *outdata) {
    if (top < 0) {
        printf("stack is empty");
        return;
    }
    *outdata = data[top];
    top--;
}

void SimpleStack::GetTop(int *outdata) {
    if (top < 0) {
        printf("stack is empty");
        return;
    }
    *outdata = data[top];
}

bool SimpleStack::IsEmpty() {
    return (top == -1);
}

void SimpleStack::ClearStack() {
    memset(data, 0, MAX_STACK_LEN);
    top = -1;
}

int SimpleStack::GetLength() {
    return top+1;
}