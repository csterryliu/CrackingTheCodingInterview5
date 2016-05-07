//
//  permutation.cpp
//  CtCI5
//
//  Created by Terry on 2016/5/7.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "permutation.hpp"
#include <unordered_map>  // C++ 11 feature
#include <algorithm>

PermutationDetector::PermutationDetector(){
    
}
PermutationDetector::~PermutationDetector() {
    
}
bool PermutationDetector::Judge(std::string& s1, std::string& s2) {
    if (s1.length() != s2.length()) {
        printf("They doesn't have the same length\n");
        return false;
    }
    
    std::unordered_map<char, bool> map;
    for (int i = 0; i < s1.length(); i++) {
        map[s1[i]] = true;
    }
    
    for(int i = 0; i < s2.length(); i++) {
        auto search_result = map.find(s2[i]);
        if (search_result == map.end()) {
            printf("%s is not the permutaion of %s\n", s1.c_str(), s2.c_str());
            return false;
        }
    }
    
    printf("%s is the permutaion of %s\n", s1.c_str(), s2.c_str());
    return true;
}
// inspired by official solution
bool PermutationDetector::JudgeWithoutMap(std::string& s1, std::string& s2) {
    if (s1.length() != s2.length()) {
        printf("They doesn't have the same length\n");
        return false;
    }
    std::string temp_s1 = s1;
    std::string temp_s2 = s2;
    // sort strings
    std::sort(temp_s1.begin(), temp_s1.end());
    std::sort(temp_s2.begin(), temp_s2.end());
    
    for (int i = 0; i < temp_s1.length(); i++) {
        if (temp_s1[i] != temp_s2[i]) {
            printf("%s is not the permutaion of %s\n", s1.c_str(), s2.c_str());
            return false;
        }
    }
    
    printf("%s is the permutaion of %s\n", s1.c_str(), s2.c_str());
    return true;
}