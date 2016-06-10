//
//  intbitoperator.cpp
//  CtCI5
//
//  Created by Terry on 2016/6/10.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "intbitoperator.hpp"

IntBitOperator::IntBitOperator() {
    
}
IntBitOperator::~IntBitOperator() {
    
}

bool IntBitOperator::GetBit(int target, int whichbit) {
    // example: if whichbit = 5
    // (1110 0001) & (0001 0000) = 0000 0000
    // 0000 0000 eqauls 0, so that bit must be 0
    // return false (0)
    return (target & (1 << whichbit)) != 0;
}
int IntBitOperator::SetBit(int target, int whichbit) {
    // example: if whichbit = 5
    // (1110 0001) | (0001 0000) = 1111 0001
    return target | (1 << whichbit);
}
int IntBitOperator::ClearBit(int target, int whichbit) {
    // example: if whichbit = 5
    // (1110 0001) & ~(0001 0000) = (1110 0001) & (1110 1111)
    // = 1110 0001
    int mask = ~(1 << whichbit);
    return target & mask;
}
int IntBitOperator::ClearBitsMSBthroughI(int target, int i) {
    // example: if i = 5 (include #i bit)
    // (1110 0001) & (0001 0000) - 1 = (1110 0001) & (0000 1111)
    // 0000 0001
    int mask = (1 << i) - 1;
    return target & mask;
}
int IntBitOperator::ClearBitsIthrough0(int target, int i) {
    // example: if i = 5 (include #i bit)
    // (1110 0001) & ~((0000 0001 << (6)) - 1)
    // = (1110 0001) & ~(0010 0000 - 0000 0001)
    // = (1110 0001) & ~(0001 1111)
    // = (1110 0001) & (1110 0000)
    // (1110 0000)
    int mask = ~((target << (i+1)) - 1);
    return target & mask;
}
int IntBitOperator::UpdateBit(int target, int i, int v) {
    // example: if i = 5, v = 1 (or 0, we pick 1 here)
    // clear #i bit first, then update it with v
    // (1110 0001) & ~(0001 0000)
    // = (1110 0001) & (1110 1111)
    // = (1110 0001)
    // shift v with i bits, and then OR with target
    // (1110 0001) | (0001 0000)
    // = (1111 0001)
    int mask = ~(1 << i);
    return (target & mask) | (v << i);
}