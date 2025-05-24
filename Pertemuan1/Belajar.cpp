#include <iostream> //header untuk c++
#include <conio.h> //untuk getche() dan getch()
using namespace std; //agar tidak perlu selalu menulis std::

int main () //fungsi utama cpp
{
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;
    
    /*cout : fungsi keluaran cpp
    cin : fungsi masukan cpp*/

    cout << "Hello world!" << endl; //fungsi keluaran cpp
    cout << "Masukkan nama : ";
    // cin >> nama;
    getline(cin, nama); //agar karakter spasi bisa terbaca

    cout << "Masukkan KOM : ";
    cin >> kom; //fungsi masukan cpp

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) : ";
    jenisKelamin = getche(); //agar karakter langsung tampil, nggak perlu tekan enter

    //untuk output 
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jenisKelamin); //untuk menampilkan karakter jenis kelamin

    getch(); //karakter yang diketik ga tampil di layar
}
