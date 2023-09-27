#ifndef GENQUEUE_H
#define GENQUEUE_H

#include <iostream>
#include <exception>

using namespace std;

class GenQueue {
    public:
        GenQueue();
        GenQueue(int maxSize);

        ~GenQueue();

        void insert(char c);
        char remove();
        char front();

        unsigned int getSize();
        bool isEmpty();
        bool isFull();

        void printQueue();

    private:
        char *array;
        int size;

        int front;
        int rear;
        int numElements;


};