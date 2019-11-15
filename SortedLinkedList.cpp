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
        //if not empty all of the below is run to insert the node in the new location
    } else {
        Node *current = head;
        Node *previous = nullptr;

        //current->data > newData->data
        if (newData->data < current->data) {
            newData->next = head;
            head = newData;
            return;
        }
        //keeps searching for the correct location and going through the list
        previous = current;
        current = current->next;

        while (current) {
            //newData->data > current->data
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