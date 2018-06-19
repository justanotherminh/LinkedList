#ifndef LINKEDLIST_LIBRARY_H
#define LINKEDLIST_LIBRARY_H

#include <iostream>

using namespace std;

template <class T> struct Node {
    T value;
    Node<T> * next;
    Node(T value, Node * next) {
        this->value = value;
        this->next = next;
    }
    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

template <class T> class LinkedList {
private:
    Node<T> * head;
public:
    LinkedList();
    ~LinkedList();
    int length();
    void print();
    void add(T value);
//    void add(int i, T value);
    LinkedList & operator << (T value) {
        this->add(value);
        return *this;
    }
};

#endif