#include <iostream>
#include <string>
using namespace std;

/*struktur struct*/
    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

/*fungsi utama*/
int main() {
    Mahasiswa mhs1;
    
    mhs1.nama = "Cyrilla";
    mhs1.umur = 19;
    cout << " akses dengan . : " << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << "IPK: " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1;
    cout << "Akses dengan -> : " << endl;
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "IPK: " << ptrMhs->ipk << endl;
}
