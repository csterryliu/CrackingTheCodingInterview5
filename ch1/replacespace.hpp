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
    void Replace(char* str, int len);
private:
    const char* replacement_;
};