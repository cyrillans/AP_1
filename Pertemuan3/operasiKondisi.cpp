#include <iostream>
using namespace std;

int main()
{
    int nilai;

    system("CLS"); //untuk clear screen

    cout << "Masukkan nilai : "; cin>> nilai;

    //If statement : hanya 1 pernyataan
    if (nilai <= 65)
        cout << "Anda tidak lulus!" << endl;
    
    //   if- else  Statement : 2 pernyataan
    if (nilai <= 65)
        cout << "Anda tidak lulus!" << endl;
    else
        cout << "Anda lulus!" << endl;

    //   if- else- if  Statement : 3 atau lebih pernyataan
    if (nilai == 100)
        cout << "Anda Keceh" << endl;
    else if (nilai <= 65)
        cout << "Anda tidak lulus!" << endl;
    else
        cout << "Anda lulus!" << endl;

    // Nested if : if di dalam if
    if (nilai <= 65)
        cout << "Anda tidak lulus!" << endl;
    else
        if (nilai == 100)
            cout << "Anda lulus dan anda Keceh" << endl;
        else
            cout << "Anda lulus" << endl;

    //Swicth Case
    switch (nilai) {
        case 1 : 
            cout << "senin" << endl; break; //break sebagai pembatas dengan case lainnya
        case 2 :
            cout << "selasa" << endl; break;
        case 3 :
            cout << "rabu" << endl; break;
        case 4 :
            cout << "kamis" << endl; break;
        case 5 :
            cout << "jumat" << endl; break;
        case 6 :
            cout << "sabtu" << endl; break;
        case 7 :
            cout << "minggu" << endl; break;
        default : //inputan yg dijalankan, jika kondisi tidak ada di case
            cout << "Inputan tidak valid" << endl;

    //switch range : (hingga) dilambangkan dengan titik 3 kali (...)
    switch (nilai) {
        case 85 ... 100  : cout << "A" << endl; break;
        case 80 ... 84 : cout << "B+" << endl; break;
        case 75 ... 79  : cout << "B" << endl; break;
        case 70 ... 74  : cout << "C+" << endl; break;
        case 65 ... 69  : cout << "C" << endl; break;
        case 60 ... 64  : cout << "D" << endl; break;
        default : cout << "E" << endl; break;
    }

    //Ternary operator
    if (nilai % 2 == 0) {
        cout << "Genap nih" << endl;
    } else {
        cout << "Ganjil sih" << endl;
    }

    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; 
    cout << nilai << " tuh bilangan " << checkNum << " sih" << endl;
    }
}


