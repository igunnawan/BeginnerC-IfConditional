/* Nama File : KlasifikasiHari.c */
/* Deskripsi : Klasifikasi sebuah hari dari Nomor hari sembarang*/
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int I; /* Hari ke - n */

    /*Algoritma*/
    printf("Masukkan Bilangan : ");
    scanf("%d",&I);
    switch(I) {
        case 1 :
        printf("Senin");
        break;

        case 2 :
        printf("Selasa");
        break;

        case 3 :
        printf("Rabu");
        break;

        case 4 :
        printf("Kamis");
        break;

        case 5 :
        printf("Jumat");
        break;

        case 6 :
        printf("Sabtu");
        break;
        
        case 7 :
        printf("Minggu");
        break;

        default :
        printf("Masukkan nomor hari tidak tepat");
        break;
    }
}
