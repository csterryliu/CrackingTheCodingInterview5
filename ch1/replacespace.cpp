//
//  replacespace.cpp
//  CtCI5
//
//  Created by Terry on 2016/5/8.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "replacespace.hpp"

#define REPLACEMENT_SIZE 3

ReplaceSpace::ReplaceSpace() : replacement_("%20") {
    
}
ReplaceSpace::~ReplaceSpace() {
    
}
void ReplaceSpace::Replace(char* str, int len) {
    for (int front = 0; front < len; front++) {
        if (str[front] == 32) {
            // move the rest of string
            memcpy(str+(front+REPLACEMENT_SIZE), str+(front+1), len-(front-1));
            // put replacement into the position
            memcpy(str+front, replacement_, REPLACEMENT_SIZE);
            len += 2;
        }
    }
    printf("Done: %s\n", str);
}