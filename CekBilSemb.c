/* Nama File : CekBilSem.c */
/* Deskripsi : Klasifikasi sebuah bilangan bulat integer sembarang*/
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    /*Kamus*/
    int I; /*Masukkan Integer Sembarang*/

    /*Algoritma*/
    printf("Masukkan Bilangan : ");
    if (scanf("%d",&I) == 1){
        if (I >0) 
        {
            printf("Merupakan bilangan bulat Positif");
        }
        else if (I < 0)
        {
            printf("Merupakan bilangan bulat Negatif");
        }
        else if (I == 0)
        {
            printf("Merupakan bilangan nol");
        } 
    }
    else {
        printf("Bukan merupakan bilangan bulat");
    }
    return 0;
}