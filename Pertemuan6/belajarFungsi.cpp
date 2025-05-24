#include <iostream>
using namespace std;

void sapa(string nama) { //fungsi sapa
    cout << "Hallo " << nama << "! Selamat belajar c++!" << endl;
}

int main() {
    string namaPengguna = "Cyrilla"; //mengisi variabel nama

    sapa(namaPengguna); //memanggil fungsi sapa

    return 0;
}
