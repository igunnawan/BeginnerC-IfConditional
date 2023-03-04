/* Nama File : CekSegitigaSem.c */
/* Deskripsi : Klasifikasi sebuah segitiga dari sisi sembarang*/
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int i; /* Sisi Pertama */
    int j; /* Sisi Kedua */
    int k; /* Sisi Ketiga */

    /*Algortima*/
    printf("Masukkan Bilangan pertama : ");
    scanf("%d",&i);
    
    printf("Masukkan Bilangan kedua : ");
    scanf("%d",&j);
    
    printf("Masukkan Bilangan ketiga : ");
    scanf("%d",&k);

    if (i > 0 && j > 0 && k > 0){
        if (i == j && i == k){
            printf("Segitiga Sama Sisi");
        } else if (i == j || i == k || j == k){
            printf("Segitiga Sama Kaki");
        } else if (i != j && i != k && j != k){
            printf("Segitiga Sembarang");
        } else {
            printf("Terdapat nilai yang bukan sisi segitiga");
        }
    } else {
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
}