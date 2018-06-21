//
// Created by Nguyen Luong Minh on 6/19/18.
//

#include "LinkedList.h"

int main() {
    LinkedList<int> list;
    list << 1 << 2 << 3 << 4 << 5;
    list[3] = 100;
    cout << list << endl;
    return 0;
}