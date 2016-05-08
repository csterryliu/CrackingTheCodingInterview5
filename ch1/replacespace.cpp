//
//  replacespace.cpp
//  CtCI5
//
//  Created by Terry on 2016/5/8.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "replacespace.hpp"
#include <string>

#define REPLACEMENT_SIZE 3
#define SPACE_ASCII 32

ReplaceSpace::ReplaceSpace() : replacement_("%20") {
    
}
ReplaceSpace::~ReplaceSpace() {
    
}
void ReplaceSpace::Replace(char* str, int len) {
    int front;
    for (front = 0; front < len; front++) {
        if (str[front] == SPACE_ASCII) {
            // move the rest of string
            memcpy(str+(front+REPLACEMENT_SIZE), str+(front+1), len-(front-1));
            // put replacement into the position
            memcpy(str+front, replacement_, REPLACEMENT_SIZE);
            len += (REPLACEMENT_SIZE-1);
        }
    }
    str[front] = '\0';  // in case that the str isn't initialized properly
    printf("Done: %s\n", str);
}