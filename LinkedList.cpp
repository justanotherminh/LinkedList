#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template<typename T>
int LinkedList<T>::length() {
    int length = 0;
    Node<T> *e = head;
    while (e != NULL) {
        e = e->next;
        length++;
    }
    return length;
}

template<typename T>
ostream& operator<<(ostream& os, const LinkedList<T>& list) {
    os << "{";
    Node<T> *e = list.head;
    string sep = "";
    while (e != NULL) {
        os << sep;
        os << e->value;
        e = e->next;
        sep = ", ";
    }
    os << "}";
    return os;
}

template<typename T>
void LinkedList<T>::add(T value) {

    Node<T> *new_node = new Node<T>(value, NULL);
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node<T> *e = head;
    while (e->next != NULL) {
        e = e->next;
    }
    e->next = new_node;
}

template<typename T>
Node<T> * LinkedList<T>::get(int idx) {
    if (head == NULL) {
        cerr << "List index out of bounds" << endl;
        exit(0);
    }; // Will move to exception handling
    Node<T> *e = head;
    int i = 0;
    while (i < idx && e->next != NULL) {
        e = e->next;
        i++;
    }
    if (i < idx) {
        cerr << "List index out of bounds" << endl;
        exit(0);
    };
    return e;
}

template<typename T>
LinkedList<T>::~LinkedList() {
    delete head;
}
