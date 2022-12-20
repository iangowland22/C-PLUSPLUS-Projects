/*
 Author: Ian Gowland
 Class: IT180 
 ULID: igowlan
*/

#include <iostream>
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList{
    public:
        int arrCapacity;
        int elementCounter;
        int *arr;
        ArrayList();
        void push(int m);
        void erase(int m);
        int toString();
};

#endif