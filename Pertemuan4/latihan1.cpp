#include <iostream>
 using namespace std;
 
 int main() {
     string kalimat;
     int i;
 
     cout << "Masukkan kalimat : ";
     getline(cin, kalimat); //agar spasi terbaca
 
     for(i = 0; i < kalimat.length(); i++){ //kalimat.length() : untuk mengetahui panjang indeks kalimat
         kalimat[i] = toupper(kalimat[i]); //toupper : memperbesar huruf
     }
     cout << "Kalimat dalam huruf kapital : " << kalimat << endl;
 
     return 0;
 }
