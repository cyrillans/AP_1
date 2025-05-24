#include <iostream>
using namespace std;

class ContohAkses {
    private: //anya dapat diakses disitu aja
        int priveteVar;
    protected: 
        int protectedVar; //bisa diakses di dalam class sendiri dan class turunannya
    public:
        int publicVar; //bisa diakses dimana aja

    //construcror
    ContohAkses() {
        priveteVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl; //bisa semua
        cout << priveteVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses {
    public :
    void aksesProtected() {
        cout << protectedVar << endl;
        cout << publicVar << endl;
        // cout << privateVar << endl; // error, karna private gak bisa diakses di mana saja
    }
};

int main() {
    ContohAkses obj;
    obj.tampilkanSemua(); 

    cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl; // gak bisa, error
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl;

    cout << "/n Akses dari kelas turunan : " << endl;
    Turunan tur; 
    tur.aksesProtected();
}
