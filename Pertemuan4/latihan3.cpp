#include <iostream>
using namespace std;

int main() {
    string password, sandi, expected = "";

    //input
    cout << "Masukkan kata sandi : ";
    cin >> password;

    cout << "Masukkan kata : ";
    cin >> sandi;

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) { //panjang password harus lebih besar dari indeks ke i
        expected += password.substr(0, i + 1); //0 : ambil dari indeks ke 0; i+1 : jumlah karakter yang diambil
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl;
    } else {
        cout << "Tulisan agen salah" << endl;
    }

    return 0;
}
