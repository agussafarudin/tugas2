#include <stdio.h>
#include <conio.h>
#include <iostream>

int tambah (int a, int b);
int kurang (int a, int b);
int kali (int a, int b);
int bagi (int a, int b);
int main (void)
{
    int a,b,c,op;
    printf(" ----------------BELAJAR HITUNG C++------------------- \n \n \n");
    printf("Input Bilangan Pertama : ");
    scanf("%d",&a);
    printf("Input Bilangan Kedua   : ");
    scanf("%d",&b);
    printf(" \n== Masukkan Operasi ==\n(1) Jumlah\n(2) Kurang\n(3) Kali\n(4) Bagi\n Operasi Terpilih : ");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        c=tambah(a,b);
        printf("\n%d+%d=%d",a,b,c);
    case 2:
        c=kurang(a,b);
        printf("\n%d-%d=%d",a,b,c);break;
    case 3:
        c=kali(a,b);
        printf("\n%d*%d=%d",a,b,c);break;
    case 4:
        c=bagi(a,b);
        printf("\n%d/%d=%d",a,b,c);break;
    }
    getch();
}
int tambah(int a, int b)
{
    int c;
    c=a+b;
    return (c);
}
int kurang(int a, int b)
{
    int c;
    c=a-b;
    return (c);
}
int kali(int a, int b)
{
    int c;
    c=a*b;
    return (c);
}
int bagi(int a, int b)
{
    int c;
    c=a/b;
    return (c);
}
