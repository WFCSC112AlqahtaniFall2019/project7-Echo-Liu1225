//
// Created by 刘颖恒 on 2019/11/14.
//


#include "Stack.h"

//default constructor
Stack::Stack(){
    head= nullptr;
}

void Stack::push_head(Data& a){
    Node *newHead = new Node(a);

    if (head == nullptr) {
        head = newHead;
    }
    else {
        newHead->next = head;
        head = newHead;
    }
}

bool Stack::pop_head(Data& a) {
    if (head==nullptr){
        return false;
    } else{
        Node* previous;
        previous= head;
        head=head->next;
        previous->next= nullptr;
        delete previous;
        return true;
    }

}