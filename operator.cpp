#include <iostream>
using namespace std;

int main()
{
    int a,b;

    system("CLS");

    //Assignment operator (=)
    a = 3;
    b = 5;

    //Aritmethical operator (+, -, *, /, %)
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / (float)b; //type casting = mengubah tipe data dari sebuah variabel
    int modulo = a % b;

    cout<< "Hasil Penjumlahan : "<< tambah << endl;
    cout<< "Hasil Pengurangan : "<< kurang << endl;
    cout<< "Hasil Perkalian : "<< kali << endl;
    cout<< "Hasil Pembagian : "<< bagi << endl;
    cout << "Hasil Mod : "<< modulo << endl;

    //Relational operator
    

    //Logical Operator
    //cout << (true && true) << endl;
    //cout << (true && false) << endl;
    //cout << (false && true) << endl;
    //cout << (false && false) << endl;

    //cout << (true || true) << endl;
    //cout << (true || false) << endl;
    //cout << (false || true) << endl;
    //cout << (false || false) << endl;

    //cout << !true << endl;
    //cout << !false << endl;

    //Bitwise opereator (&, |, ~, ^, <<, >>) --> operasi biner
    //cout << (5 & 7) << endl;
    //cout << (5 | 7) << endl;
    //cout << (5 ^ 7) << endl;
    //cout << (~ 7) << endl;
    //cout << (7 << 2) << endl;
    //cout << (7 >> 2) << endl;

    //shorthand
    //a += 7; // a = a = 7
    //cout << a << endl;

    //a -= 7; // a = a - 7;
    //cout << a << endl;

    //a *= 7; // a = a * 7
    //cout << a << endl;

    //a /= 7; // a = a / 7;
    //cout << a << endl;

    //Increment & Dicrement
    //Pre Increment = Penambahan secara langsung
    //cout << a << endl;
    //cout << ++a << endl;

    //cout << b << endl;
    //cout << ++b << endl;

    //Post Increment = penambahan 
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl;










}
