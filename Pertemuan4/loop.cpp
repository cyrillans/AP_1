#include <iostream>
using namespace std;

int  main() 
{
    // Goto Label
    // Hello world, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> Hello world, IKLC, Ilmu Komputer, Fasilkom-TI

    a : 
        cout << "Hello World" << endl;
        goto d;
    b : 
        cout << "Fasilkom-TI" << endl;
        return 0;
    c : 
        cout << "Ilmu Komputer" << endl;
        goto b;
    d : 
        cout << "IKLC" << endl;
        goto c;

    //menampilkan bilangan genap 10 -> dengan goto
    int i = 10;
    genap :
    if (i % 2 == 0) {
        cout << i << endl;
    } i--;

    if (i >= 2) {
        goto genap;
    }

    // Statement while : ketika kondisi masih benar, akan terus dijalankan
    int i = 1;
    while (i >= 10) {
        if (i % 2 == 0) {
            cout << i << " ";
        } i++;
    }

    // statement do-while -> perulangan minimal berjalan sekali, meskipun false
    int i = 1;
    do {
        cout << i << endl;
    } while (1 <= 0);

    // Statement for
    // for (inisialisai, kondisi, increase)
   for (int i = 1; i <= 10; i+=2) { 
        cout << "Hello World" << endl;
    }

    //Nested for
    // ***** 5 x 5 (menampilkan bintang 5x5)
    for (int i = 1; i <= 5; i++) { //untuk baris
        for (int j = 1; j<= 5; j++) { //untuk kolom
            cout << " * "; //output
        }
        cout << endl;
    }

    //Segitiga siku-siku
    for (int i = 1; i <= 5; i++) { //untuk baris
        for (int j = 1; j <= i; j++) { //untuk kolom
            cout << "* "; //output
        }
        cout << endl;
    }
}
