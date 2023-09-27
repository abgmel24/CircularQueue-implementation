#include "genqueue.h"

GenQueue::GenQueue() {
    size = 64;
    array = new int[size];
    front = -1;
    rear = 0;
}

GenQueue::GenQueue(int maxSize) {
    size = maxSize;
    array = new int[size];
    front = 0;
    rear = 0;
}

GenQueue::~GenQueue() {
    delete[] array;
    cout << "garbage collecting"
}

void GenQueue::insert(char c) {
    if(isFull()) {
        throw runtime_error("Priority Queue is full")
    }

    array[rear++] = c;
    ++numElements;
}

char GenQueue::remove() {
    if(isEmpty()) {
        //TODO
    }

    numElements--;
    return array[front++];
}

char GenQueue::front() {
    return array[front];
}

unsigned int GenQueue::getSize() {
    return numElements;
}

bool GenQueue::isEmpty() {
    return front == 0;
}

bool GenQueue::isFull() {
    return numElements == size;
}

void GenQueue::printQueue() {
    for(int i = front; i < rear; ++i) {
        cout << array[i] << endl;
    }
}