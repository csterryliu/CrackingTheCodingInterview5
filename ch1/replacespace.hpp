//
//  replacespace.hpp
//  CtCI5
//
//  Created by Terry on 2016/5/8.
//  Copyright © 2016年 Terry. All rights reserved.
//

#ifndef replacespace_hpp
#define replacespace_hpp

#include <stdio.h>

#endif /* replacespace_hpp */

class ReplaceSpace {
public:
    ReplaceSpace();
    ~ReplaceSpace();
    // post condition:
    // the character array has sufficient space at the end of the string
    // to hold the the additional character
    void Replace(char* str, int len);
private:
    const char* replacement_;
};