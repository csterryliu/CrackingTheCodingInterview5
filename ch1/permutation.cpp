//
//  permutation.cpp
//  CtCI5
//
//  Created by Terry on 2016/5/7.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "permutation.hpp"
#include <unordered_map>  // C++ 11 feature

PermutationDetector::PermutationDetector(){
    
}
PermutationDetector::~PermutationDetector() {
    
}
bool PermutationDetector::Judge(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) {
        printf("They doens't have the same length\n");
        return false;
    }
    std::string& standard = s1;
    std::string& willBeChecked = s2;
    std::unordered_map<char, bool> map;
    
    if (s1.length() < s2.length()) {
        standard = s2;
        willBeChecked = s1;
    }
    
    for (int i = 0; i < standard.length(); i++) {
        map[standard[i]] = true;
    }
    
    for(int i = 0; i < willBeChecked.length(); i++) {
        auto search_result = map.find(willBeChecked[i]);
        if (search_result == map.end()) {
            printf("%s is not the permutaion of %s\n", willBeChecked.c_str(), standard.c_str());
            return false;
        }
    }
    
    printf("%s is the permutaion of %s\n", willBeChecked.c_str(), standard.c_str());
    return true;
}