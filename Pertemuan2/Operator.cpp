#include <iostream>
using namespace std;

int main()
{
    int a,b;

    system("CLS"); //untuk clear screen

    //Assignment operator (=)
    a = 3;
    b = 5;

    //Aritmethical operator (+, -, *, /, %)
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / (float)b; // type casting = mengubah tipe data dari sebuah variabel
    int modulo = a % b;

    cout << "Hasil penjumlahan : " << tambah << endl;
    cout << "Hasil pengurangan : " << kurang << endl;
    cout << "Hasil perkalian : " << kali << endl;
    cout << "Hasil pembagian : " << bagi << endl;
    cout << "Hasil sisa bagi : " << modulo << endl;

    //Increment & Dicrement = penambahan dan pengurangan 1
    //Pre Increment = Penambahan secara langsung
    cout << a << endl;
    cout << ++a << endl;

    cout << b << endl;
    cout << ++b << endl;
    cout << "---" << endl;

    //Post Increment = penambahan disimpan, harus dipanggil sekali lagi
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl;
    cout << "---" << endl;

    //Pre Decrement
    //Pre decrement = Pengurangan secara langsung
    cout << a << endl;
    cout << --a << endl;

    cout << b << endl;
    cout << --b << endl;
    cout << "---" << endl;

    //Post Decrement = Pengurangan disimpan, harus dipanggil sekali lagi
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl;
    cout << "---" << endl;

}
