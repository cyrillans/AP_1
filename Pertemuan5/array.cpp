#include <iostream>
#include <string> //header untuk string
#include <array> //header untuk fungsi array
using namespace std;

int main() {

    // Array Declaration & Initialization
    /* 2 Cara Membuat Array*/

    // cara 1 : array kosong
    string nama[5];

    nama[0] = "Alya";
    nama[1] = "Cyrilla";
    nama[2] = "Natan";
    nama[3] = "Juan";
    nama[4] = "Pina";

    // // cara 2 : Array yang langsung diisi
    string nama[5] = {"Alya", "Cyrilla", "Natan", "Juan", "Pina"};
    // string nama = {"Alya", "Cyrilla", "Natan", "Juan", "Pina"};

    // //Ascending Element in Array : dari indeks rendah ke indeks tinggi
    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;

    // // Menggunakan looping
    for (int i = 0; i < 5; i++) {
         cout << nama[i] << endl;
     }

    // // Descending Element in Array use looping : dari indeks tinggi ke rendah
    for (int i = 0; i >= 0; i--) {
        cout << nama[i] << endl;
     }

    // Multidimensional Array 
    // 1 3 5
    // 2 4 6

    int matrix[2][3] = {{1, 3, 5}, {2, 4, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int matrix[4][6] = {
        {1, 2, 3, 4, 5, 6}, 
        {7, 8, 9, 2, 15, 23}, 
        {9, 8, 17, 16, 5, 4}, 
        {2, 4, 6, 28, 5, 27}};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matrix[i][j] << "\t";
            }
         cout << endl;
    }

    // String (array of characters)
    string nama = "Naufal";
    cout << nama[0] << endl;
    cout << nama[2] << endl;

    for (int i = 0; nama.length(); i++) {
        cout << nama[i] << endl;
    }

    string s1 = "Hello";
    string s2 = "world";

    /* 1. s1 = s2 */
    s1 = s2;
    cout << "s1 = " << s1 << endl;

    /* 2. s1 = s1 + s2 */
    s1 = "Hello";
    cout << "Hasil = " << s1 + s2 << endl;

    /* 3. s1.length() */
    cout << s1.length() << endl;
    cout << (s1 + s2).length() << endl;

    /* 4. s1.substr */
    cout << s1.substr(2,4) << endl; //huruf ke berapa, panjangnya berapa
    cout << (s1 + s2). substr(5, 3) << endl;


    // Operator sizeof()
    int angka = 10;
    cout << sizeof(angka);

    int nilai[] = {10, 20, 30, 40, 50}; // integer ukurannya = 4 byte * 5 elemen array, jadi 20
    cout << sizeof(nilai);

    string s = "Cyrilla";
    cout << sizeof(s);
    cout << s.length();

    string nama_karyawan[] = {"Alya", "Cyrilla", "Natan", "Juan", "Pina"};
    int n = sizeof(nama_karyawan) / sizeof(string); // cara tau berapa element arraynya
    cout << n << endl;

    // Array Library
    array<float, 5> nilai = {87.2, 90, 100, 95.10, 78.5};
    cout << "Nilai : ";
    for (int i = 0; i < nilai.size(); i++) {
        cout << nilai[i] << " ";
    }

    for (float n :  nilai) {
        cout << n << " ";
    }
}
