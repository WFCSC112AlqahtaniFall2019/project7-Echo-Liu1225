//Echo Liu
// * Project 7
// * Nov.14th.2019

#include <iostream>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "SortedLinkedList.h"


using namespace std;
int main() {

    Data other;
    Stack* topToBottom = new Stack;
    Queue* line = new Queue;
    SortedLinkedList* sortedList = new SortedLinkedList;

    ifstream in;
    ofstream aStack;
    ofstream aQueue;
    ofstream outSorted;

    in.open ("../2015.csv");
    aStack.open("Stack.txt");
    aQueue.open("Queue.txt");
    outSorted.open("Sorted.txt");

    if(!in.is_open()){
        cout<<"Input file hasn't been opened."<<endl;
        return 1;
    }
    if(!aStack.is_open()){
        cout<<"Stack output file hasn't been opened."<<endl;
        return 2;
    }
    if(!aQueue.is_open()){
        cout<<"Queue output file hasn't been opened."<<endl;
        return 3;
    }
    if(!outSorted.is_open()){
        cout<<"Sorted output file hasn't been opened."<<endl;
        return 4;
    }

    cout<<"All files have been opened."<<endl;


    aQueue<<"Happiness Rate, Happiness Score, GDP per Capital, Life Expectancy"<<endl;
    aStack<<"Happiness Rate, Happiness Score, GDP per Capital, Life Expectancy"<<endl;
    outSorted<<"This list is sorted."<<endl;
    outSorted<<"Happiness Rate, Happiness Score, GDP per Capital, Life Expectancy"<<endl;


    while (!in.eof()) {
        string country, rate, ascore, GDP, Expectancy;
        getline(in, country, ',');
        getline(in, rate, ',');
        getline(in, ascore, ',');
        getline(in, GDP, ',');
        getline(in, Expectancy,'\n');


        //changes from string to double
        double rating = stod(rate);
        double score = stod(ascore);
        double gdp = stod(GDP);
        double life = stod(Expectancy);


        Data info = Data (country, rating, score, gdp, life);
        topToBottom->push_head(info);
        line->enqueue_tail(info);
        sortedList->insertSorted(info);
        other=info;
    }

    topToBottom->print(aStack,other);
    line->print(aQueue,other);
    sortedList->print(outSorted,other);

    while (topToBottom->pop_head(other));
    while (line->dequeue_head());

    in.close();
    aQueue.close();
    outSorted.close();
    aStack.close();
    cout<<"All files are closed."<<endl;


    return 0;
}