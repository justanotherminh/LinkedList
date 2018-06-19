#include "LinkedList.h"

template <class T> LinkedList<T>::LinkedList() {
    head = NULL;
}

template <class T> int LinkedList<T>::length() {
    int length = 0;
    Node<T> * e = head;
    while (e != NULL) {
        e = e->next;
        length++;
    }
    return length;
}

template <class T> void LinkedList<T>::print() {
    cout << "{";
    Node<T> * e = head;
    while (e->next != NULL) {
        cout << e->value << ", ";
        e = e->next;
    }
    cout << e->next->value << "}" << endl;
}

template <class T> void LinkedList<T>::add(T value) {
    auto * new_node = new Node<T>(value, NULL);
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node<T> * e = head;
    while (e->next != NULL) {
        e = e->next;
    }
    e->next = new_node;
}

template <class T> LinkedList<T>::~LinkedList() {
    delete head;
}
