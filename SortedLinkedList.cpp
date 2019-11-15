//
// Created by 刘颖恒 on 2019/11/14.
//
#include <string>
#include "SortedLinkedList.h"
using namespace std;


void SortedLinkedList::insertSorted(Data &a) {
    //Case 1: the list is empty
    Node *newData = new Node(a);
    if (head == nullptr) {
        head = newData;
    }
    else {
        Node *current = head;
        Node *previous = nullptr;
        if (newData->data < current->data) {
            newData->next = head;
            head = newData;
            return;
        }
        previous = current;
        current = current->next;

        while (current) {
            if (current->data < newData->data) {
                previous = current;
                current = current->next;
            } else {
                break;
            }
        }

        newData->next = current;
        previous->next = newData;

    }
}