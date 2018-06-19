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
void LinkedList<T>::print() {
    cout << "{";
    Node<T> * e = head;
    string sep = "";
    while (e != NULL) {
        cout << sep;
        cout << e->value;
        e = e->next;
        sep = ", ";
    }
    cout << "}" << endl;
}


template<typename T>
void LinkedList<T>::add(T value) {
    cout << "ADDED: " << value << endl;

    Node<T> * new_node = new Node<T>(value, NULL);
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
LinkedList<T>::~LinkedList() {
    delete head;
}
