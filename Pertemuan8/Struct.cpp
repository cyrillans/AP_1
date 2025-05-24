#include <iostream>
#include <string> //header string
#include <vector> //header vector
using namespace std;

/*Struct : kumpulan data dgn tipe data yg berbeda*/

struct Alamat
{
    string jalan;
    string kota;
    int KodePos;
};

struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
        Alamat alamat; //nested struct
    };

int main() {
    //mengisi struct
    Mahasiswa mhs1;
    mhs1.alamat.jalan = "Jalan Kiwi Raya";
    mhs1.alamat.kota = "Medan";
    mhs1.alamat.KodePos = 20226;

    //output
    cout << "Alamat : " << mhs1.alamat.jalan << ", " <<  mhs1.alamat.kota << ", " <<  mhs1.alamat.KodePos << endl;


    //vektor mahasiswa mengambil data dari struct mahasiswa
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkkan banyak mahasiswa : "; 
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i+1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1); //menambahkan isi vector dari belakang
    }

    //menampilkan output
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i+1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }
}
