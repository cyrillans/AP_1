#include <stdio.h> //header untuk c
#include <conio.h> //untuk getche dan gets

int main()
{
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Hello World!\n");
    printf("Masukkan Nama : "); 
    gets(nama);

    printf("Masukkan Nim : ");
    scanf("%d, &nim"); //fungsi masukkan c

    getchar();

    printf("Masukkan KOM : ");
    gets(kom);

    printf("Masukkan Ip : ");
    scanf("%f, &ip");

    //output
    printf("Nama    : ");
    puts(nama);
    printf("NIM     : %d, &nim");
    printf("KOM     : "); puts(kom);
    printf("IP      : %f, &ip");

    printf("Press any button to continue ...")
    getch();
}