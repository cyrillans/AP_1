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

    // Relational Operator
    cout << (a==b) << endl;
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a!=b) << endl;

    // Logical Operator (&&, ||, !)
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    cout << !true << endl;
    cout << !false << endl;

    // Bitwise Operator (&, |, ~, ^, <<, >>) --> operasi biner
    cout << (5 & 7) << endl;
    cout << (5 | 7) << endl;
    cout << (5 ^ 7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;

    // Shorthand
    a += 7; // a = a + 7
    cout << a << endl;

    a -= 7; // a = a - 7
    cout << a << endl;

    a *= 7; // a = a * 7
    cout << a << endl;

    a /= 7; // a = a / 7;
    cout << a << endl;

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
