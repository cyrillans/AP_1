#include <stdio.h> //header untuk c
#include <conio.h> //untuk getche dan gets

int main() //fungsi utama c
{
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    /* print : fungsi keluaran;
     scanf : fungsi masukan*/

    printf("Hello World!\n"); //fungsi keluaran c

    printf("Masukkan Nama : "); 
    gets(nama); //agar karakter spasi bisa dibaca

    printf("Masukkan Nim : ");
    scanf("%d", &nim); //fungsi masukkan c

    getchar(); //Buang enter setelah input nim, biar input berikutnya tidak kacau

    printf("Masukkan KOM : ");
    gets(kom);

    printf("Masukkan Ip : ");
    scanf("%f", &ip);

    //output
    printf("Nama    : "); puts(nama); //menampilkan string, langsung ada spasi
    printf("NIM     : %d\n", &nim);
    printf("KOM     : "); puts(kom);
    printf("IP      : %f\n", &ip);

    printf("press any button to continue...");
    getch(); //nunggu satu tombol ditekan sebelum program keluar, tapi yg diketik tidak tampil di layar
}
