#include <iostream>
using namespace std;

int main()
{   
    system("CLS"); //clear screen
    int bilBulat;

    //input bilangan bulat
    cout << "Masukkan bil bulat : "; 
    cin >> bilBulat;

    //Pakai if-else-if statement
    if (bilBulat % 5 == 0) //ternery operator
        cout << bilBulat << " kelipatan 5" << endl;
    else  if (bilBulat % 10 == 0)
        cout << bilBulat << " kelipatan 10" << endl;
    else
        cout << bilBulat << " Bukan kelipatan keduanya" << endl;
}
