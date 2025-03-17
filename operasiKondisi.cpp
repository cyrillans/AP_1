#include <iostream>
using namespace std;

int main()
{
    int nilai;

    system("CLS");

    cout << "Masukkan nilai : "; cin>> nilai;

    //If statement
    //if (nilai <= 65)
        //cout << "Anda tidak lulus!" << endl;
    
    //   if- else  Statement
    //if (nilai <= 65)
        //cout << "Anda tidak lulus!" << endl;
    //else
        //cout << "Anda lulus!" << endl;

    //   if- else- if  Statement
    //if (nilai == 100)
        //cout << "Anda Keceh" << endl;
    //else if (nilai <= 65)
        //cout << "Anda tidak lulus!" << endl;
    //else
        //cout << "Anda lulus!" << endl;

    // Nested if
    //if (nilai <= 65)
        //cout << "Anda tidak lulus!" << endl;
    //else
        //if (nilai == 100)
            //cout << "Anda lulus dan anda Keceh" << endl;
        //else
            //cout << "Anda lulus" << endl;

    //Swicth Case
    //switch (nilai) {
        //case 1 : 
            //cout << "senin" << endl; break;
        //case 2 :
            //cout << "selasa" << endl; break;
        //case 3 :
            //cout << "rabu" << endl; break;
        //case 4 :
            //cout << "kamis" << endl; break;
        //case 5 :
            //cout << "jumat" << endl; break;
        //case 6 :
            //cout << "sabtu" << endl; break;
        //case 7 :
            //cout << "minggu" << endl; break;
        //default : //inputan yg dijalankan, jika kondisi tidak ada di case
            //cout << "Inputan tidak valid" << endl;

    //switch range
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
    //if (nilai % 2 == 0) {
        cout << "Genap nih" << endl;
    //} else {
        //cout << "Ganjil sih" << endl;
    //}

    srting checjNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " tuh bilangan " << checkNum << " sih" << endl;
}


