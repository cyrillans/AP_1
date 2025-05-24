#include <iostream>
using namespace std;

int main() {
    system("cls"); //clear screen

    //input kalimat
    string kalimat;
    cout << "Masukkan kalimat: "; 
    getline(cin, kalimat); //agar karakter spasi terbaca

    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u'){
            kalimat[i] = toupper(kalimat[i]); //memperbesar setiap ada huruf vokal dalam kalimat yg diinput
        }
    }

    //output
    cout << "Kalimat hasil konversi: " << kalimat << endl;
}
