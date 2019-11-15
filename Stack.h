//
// Created by 刘颖恒 on 2019/11/14.
//
#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H

#include "LinkedList.h"
#include "Data.h"

using namespace std;
class Stack : public LinkedList {

public:
    Stack(); //default constructor
    void push_head(Data& a);
    bool pop_head(Data& a);

};


#endif //PROJECT7_STACK_H