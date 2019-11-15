//
// Created by 刘颖恒 on 2019/11/14.
//
#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include "LinkedList.h"
using namespace std;
class Queue : public LinkedList {
public:
    Queue();//default constructor
    void enqueue_tail(Data da);
    bool dequeue_head();

private:
    Node* tail;
    //Node* front;

};


#endif //PROJECT7_QUEUE_H