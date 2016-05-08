//
//  singlylinkedlist.cpp
//  CtCI5
//
//  Created by Terry on 2016/5/8.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "singlylinkedlist.hpp"

SinglyLinkedList::SinglyLinkedList()
: cnt_(0),
  front_(NULL) {
}

SinglyLinkedList::~SinglyLinkedList() {
    Node* current = front_;
    while (current != NULL) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    front_ = NULL;
}
void SinglyLinkedList::Insert(int data) {
    if (front_ == NULL) {
        front_ = new Node();
        front_->value = data;
        front_->next = NULL;
        rear_ = front_;
        cnt_++;
        ShowAll();
        return;
    }
    
    Node* newNode = new Node();
    newNode->value = data;
    newNode->next = NULL;
    rear_->next = newNode;
    rear_ = rear_->next;
    cnt_++;
    ShowAll();
}
void SinglyLinkedList::Delete(int data) {
    Node* current = front_;
    if (current->value == data) {
        // remove head
        front_ = front_->next;
        delete current;
        cnt_--;
        ShowAll();
        return;
    }
    while (current->next != NULL) {
        if (current->next->value == data) {
            Node* trash = current->next;
            current->next = current->next->next;
            if (rear_ == trash) {
                rear_ = current;  // the last element
            }
            delete trash;
            cnt_--;
            ShowAll();
            return;
        }
        current = current->next;
    }
    printf("Target not found\n");
}
int SinglyLinkedList::GetCount() {
    return cnt_;
}
void SinglyLinkedList::ShowAll() {
    if (front_ == NULL) {
        printf("empty\n");
        return;
    }
    Node* n = front_;
    while (n->next != NULL) {
        printf("%d ", n->value);
        n = n->next;
    }
    printf("%d \n", n->value);
}