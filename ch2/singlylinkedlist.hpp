//
//  linkedlist.hpp
//  CtCI5
//
//  Created by Terry on 2016/5/8.
//  Copyright © 2016年 Terry. All rights reserved.
//

#ifndef singlylinkedlist_hpp
#define singlylinkedlist_hpp

#include <stdio.h>

struct Node {
    int value;
    Node* next;
};

class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void Insert(int data);
    void Delete(int data);
    int GetCount();
    void ShowAll();
    
private:
    Node* front_;
    Node* rear_;
    int cnt_;
};

#endif /* singlylinkedlist_hpp */
