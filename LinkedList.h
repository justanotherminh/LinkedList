#ifndef LINKEDLIST_LIBRARY_H
#define LINKEDLIST_LIBRARY_H

#include <iostream>

using namespace std;

template<typename T>
class Node {
public:
    T value;
    Node<T> *next;

    Node(T value, Node *next) {
        this->value = value;
        this->next = next;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }

    Node<T> &operator=(T value) {
        this->value = value;
        return *this;
    }
};

template<typename T>
class LinkedList {
private:
    Node<T> *head;
public:
    LinkedList();

    ~LinkedList();

    int length();

    template<typename U>
    friend ostream& operator<<(ostream& os, const LinkedList<U>& list);

    void add(T value);

    void add(int idx, T value);

    Node<T> * get(int idx);

    LinkedList<T> &operator<<(T value) {
        add(value);
        return *this;
    }

    T &operator[](int index) {
        Node<T> * n = get(index);
        return n->value;
    }
};

#import "LinkedList.cpp"

#endif