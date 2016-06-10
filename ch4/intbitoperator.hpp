//
//  intbitoperator.hpp
//  CtCI5
//
//  Created by Terry on 2016/6/10.
//  Copyright © 2016年 Terry. All rights reserved.
//

#ifndef intbitoperator_hpp
#define intbitoperator_hpp

#include <stdio.h>


class IntBitOperator{
public:
    IntBitOperator();
    ~IntBitOperator();
    bool GetBit(int target, int whichbit);
    int SetBit(int target, int whichbit);
    int ClearBit(int target, int whichbit);
    int ClearBitsMSBthroughI(int target, int i);
    int ClearBitsIthrough0(int target, int i);
    int UpdateBit(int target, int i , int v);
};


#endif /* intbitoperator_hpp */
