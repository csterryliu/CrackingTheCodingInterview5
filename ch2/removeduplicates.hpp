//
//  removeduplicates.hpp
//  CtCI5
//
//  Created by Terry on 2016/5/8.
//  Copyright © 2016年 Terry. All rights reserved.
//

#ifndef removeduplicates_hpp
#define removeduplicates_hpp

#include <stdio.h>
#include "singlylinkedlist.hpp"

class RemoveDuplicate {
public:
    RemoveDuplicate();
    ~RemoveDuplicate();
    void Remove(SinglyLinkedList& list);
    void RemoveWithoutBuffer(SinglyLinkedList& list);
};

#endif /* removeduplicates_hpp */
