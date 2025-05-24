#include <iostream>
using namespace std;

void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer (int *a, int *b) {
    *a += *b;
    cout << *a << endl;
}

void doubleValue (int *a) {
    *a *= 2;
    cout << *a << endl;
}

/*fungsi utama*/
int main() {
    system("CLS");

    /*tanda * : untuk mengakses isi nilai dari pointer;
    tanda & : untuk mengetahui alamat yang merujuk pada isi pointer itu*/
    
    // Deklarasi pointer
    int number = 35;
    int *pointer_number = &number;

    cout << "isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;

    //pointer operation
    *pointer_number = 25;
    cout << "isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;

    // Pointer in array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num;
    cout << "isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;
   
    *pointer_num += 5; // 6
    cout << "isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;

    // Pointer in parameter
    int num1 = 5;
    int num2 = 7;
    penjumlahan(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;
    penjumlahanPointer(&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;

    // Pointer in pointer
    int score = 4;
    int *pointer_score = &score;
    int **ptr_pointer_score = &pointer_score;

    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang diunjuk oleh pointer score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    cout << "Isi variabel ptr_pointer_score " << pointer_score << " dan isi variabel yang diunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;

    // Dynamic Pointer 
    int *ptr = new int;
    *ptr = 30;
    cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    delete ptr; //deaLLocation
    cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    //contoh
    int n;
    cout << "Masukkan sebuah angka = " ;
    cin >> n;

    doubleValue(&n);
    cout << "Nilai angka setelah dikali 2 = " << n << endl;

    
}
