#include <iostream>
#include "ArrayList.h"
int main() {

    SqlList L;
    InitList(L);
    ListInsert(L, 1, 1);
    ListInsert(L, 2, 6);
    ListInsert(L, 3, 3);
    ListInsert(L, 4, 8);
    ListInsert(L, 5, 2);
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << " ";
    }
    cout << endl;
    Delete_s_t(L, 2, 3);
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << " ";
    }
    cout << endl;

    return 0;
}
