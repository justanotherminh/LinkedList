//
// Created by Nguyen Luong Minh on 6/19/18.
//

#include "LinkedList.h"

int main() {
    LinkedList<string> list;
    list << "Hello" << "World";
    cout << list[2] << endl;
    return 0;
}