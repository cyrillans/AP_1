#include <iostream>
using namespace std;

int main()
{
    const float phi = 3.14;
    int luas, volume, r;

    cout << "Masukkan jari-jari : "; cin >> r;

    luas = 4 * phi * r * r;
    volume = (float) 4 / (float) 3 * phi * r * r * r;
    
    cout << "Luas permukaan bola : " << luas;
    cout << "\nVolume bola : " << volume;
}