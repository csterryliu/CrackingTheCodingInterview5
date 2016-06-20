//
//  simplestack.hpp
//  CtCI5
//
//  Created by Terry on 2016/6/20.
//  Copyright © 2016年 Terry. All rights reserved.
//

#ifndef simplestack_hpp
#define simplestack_hpp

#include <stdio.h>

#define MAX_STACK_LEN 30

class SimpleStack {
public:
    SimpleStack();
    ~SimpleStack();
    void Push(int indata);
    void Pop(int* outdata);
    void GetTop(int *outdata);
    bool IsEmpty();
    void ClearStack();
    int GetLength();
private:
    int data[MAX_STACK_LEN];
    int top;
};

#endif /* simplestack_hpp */
