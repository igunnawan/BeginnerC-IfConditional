/* Nama File : KlasifikasiBulan.c */
/* Deskripsi : Klasifikasi sebuah bulan dari Nomor bulan sembarang*/
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int I; /* Bulan ke - n */

    /*Algortima*/
    printf("Masukkan Bilangan : ");
    scanf("%d",&I);
    if (I == 1){
        printf("Januari");
    } else if (I == 2) {
        printf("Februari");
    } else if (I == 3) {
        printf("Maret");
    } else if (I == 4) {
        printf("April");
    } else if (I == 5) {
        printf("Mei");
    } else if (I == 6) {
        printf("Juni");
    } else if (I == 7) {
        printf("Juli");
    } else if (I == 8) {
        printf("Agustus");
    } else if (I == 9) {
        printf("September");
    } else if (I == 10) {
        printf("Oktober");
    } else if (I == 11) {
        printf("November");
    } else if (I == 12) {
        printf("Desember");
    } else {
        printf("Masukkan nomor bulan tidak tepat");
    }
}