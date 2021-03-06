//
//  removeduplicates.cpp
//  CtCI5
//
//  Created by Terry on 2016/5/8.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "removeduplicates.hpp"
#include <unordered_map>

RemoveDuplicate::RemoveDuplicate() {
    
}
RemoveDuplicate::~RemoveDuplicate() {
    
}

void RemoveDuplicate::Remove(SinglyLinkedList &list) {
    if (list.GetCount() == 0) {
        return;
    }
    std::unordered_map<int, bool> check_map;
    Node *current = list.GetFront();
    check_map[current->value] = true;
    while(current->next != NULL) {
        if (check_map[current->next->value] == false) {
            check_map[current->next->value] = true;
            current = current->next;
        } else {
            // delete the duplicate
            Node* trash = current->next;
            current->next = current->next->next;
            delete trash;
        }
    }
    
    list.ShowAll();
}

void RemoveDuplicate::RemoveWithoutBuffer(SinglyLinkedList &list) {
    if (list.GetCount() == 0) {
        return;
    }
    Node* current = list.GetFront();
    
    while (current != NULL) {
        Node* runner = current;
        while(runner->next != NULL) {
            if (runner->next->value == current->value) {
                // remove the duplicate one
                Node* trash = runner->next;
                runner->next = runner->next->next;
                delete trash;
            } else {
                runner = runner->next;
            }
            
        }
        current = current->next;
    }
    
    list.ShowAll();
}