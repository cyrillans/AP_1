#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; // var globalbisa diakses di mana saja

void namaVariabel() {
    string namaLokal = "Komputer"; // tidak bisa diakses di main program, hanya di fungsi ini saja

    //coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

/*Fungsi utama*/
int main() {
    namaVariabel();

    // coba akses
    cout << namaGlobal << endl;

    // coba akses
    //cout << namaLokal << endl;  // gak bisa diakses, karena hanya bisa di fungsinya saja
}
