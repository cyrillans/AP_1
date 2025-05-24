#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Vector Declaration & Inisialization

    vector<string> nama_karyawan = {"Alya", "Cyrilla", "Natan", "Juan", "Pina"};

    for (string karyawan : nama_karyawan) {
        cout << karyawan << endl;
    }

    // Add data to vector
    nama_karyawan.push_back("Dhafa");
    
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }

    //Delete Data from Vector
    nama_karyawan.pop_back();  //menghapus data terakhir saja

    nama_karyawan.erase(nama_karyawan.begin() + 3); //menghapus data sesuai indeks ke berapa yg diinginkan
  
    for (int i = 0; i < nama_karyawan.size(); i++) {
             cout << nama_karyawan[i] << endl;
        }
}
