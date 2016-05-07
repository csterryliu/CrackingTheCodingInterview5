//
//  permutation.hpp
//  CtCI5
//
//  Created by Terry on 2016/5/7.
//  Copyright © 2016年 Terry. All rights reserved.
//

#ifndef permutation_hpp
#define permutation_hpp

#include <stdio.h>
#include <string>

class PermutationDetector {
public:
    PermutationDetector();
    ~PermutationDetector();
    bool Judge(std::string& s1, std::string& s2);
    bool JudgeWithoutMap(std::string& s1, std::string& s2);
};

#endif /* permutation_hpp */
