#include <iostream>
using namespace std;

int main()
{   
    system("CLS");
    int bilBulat;

    cout << "Masukkan bil bulat : " << endl; 
    cin >> bilBulat;

    if (bilBulat % 5 == 0)
        cout << bilBulat << " kelipatan 5" << endl;
    else  if (bilBulat % 10 == 0)
        cout << bilBulat << " kelipatan 10" << endl;
    else
        cout << bilBulat << " Bukan kelipatan keduanya" << endl;
}