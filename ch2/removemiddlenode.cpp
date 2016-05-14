//
//  removemiddlenode.cpp
//  CtCI5
//
//  Created by Terry on 2016/5/14.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "removemiddlenode.hpp"

RemoveMiddleNode::RemoveMiddleNode() {
    
}
RemoveMiddleNode::~RemoveMiddleNode() {
    
}
// it's the official solution
// it's not difficult...but tricky
void RemoveMiddleNode::Remove(Node *n) {
    if (n == NULL || n->next == NULL) {
        return;
    }
    
    // copy the next node
    Node* trash = n->next;
    n->value = trash->value;
    n->next = trash->next;
    delete trash;
    
}