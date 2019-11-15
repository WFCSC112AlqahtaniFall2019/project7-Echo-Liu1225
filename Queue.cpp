//
// Created by 刘颖恒 on 2019/11/14.
//
#include "Queue.h"
using namespace std;

//default constructor
Queue::Queue() {
    tail= nullptr;
    //front = nullptr;
}

//takes in a Data object and creates a Node pointer and then inserts it at the end of the list.
void Queue::enqueue_tail(Data da) {
    Node* temp = new Node(da);
    //if the list is empty
    if(tail == nullptr){
        head = temp;
        tail = temp;
    }
        //if the list is not empty
    else {
        tail->next = temp;
        tail = temp;
    }
}

//Removes a Data object pointed to by the head pointer and returns true if list is full or false if empty
bool Queue::dequeue_head() {
    Node* del = head;
    if(head!= nullptr){
        head = head->next;
        del->next= nullptr;
        delete del;
        return true;
    }
    else{
        return false;
    }
}