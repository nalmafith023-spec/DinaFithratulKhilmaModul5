#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5, P;

    createList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    cout << "Isi linked list: ";
    printInfo(L);

    P = findElm(L, 8);

    if (P != Nil) {
        cout << "Elemen dengan info 8 ditemukan." << endl;
        cout << "Nilai info: " << P->info << endl;
    } else {
        cout << "Elemen tidak ditemukan." << endl;
    }
    
    cout << "Total info seluruh elemen: "
     << sumInfo(L) << endl;
     
    return 0;
}