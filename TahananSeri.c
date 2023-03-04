/* Nama File : TahananSeri.c */
/* Deskripsi : Menghitung jumlah nomor tahanan bernilai bulat positif*/
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    /*Kamus*/
    int i; /* Tahanan Pertama */
    int j; /* Tahanan Kedua */
    int k; /* Tahanan Ketiga */
    int hasil; /* Total Tahanan */

    /* Algoritma */
    printf("Masukkan Tahanan Pertama : ");
    scanf("%d",&i);
    
    printf("Masukkan Tahanan Kedua : ");
    scanf("%d",&j);
    
    printf("Masukkan Tahanan Ketiga : ");
    scanf("%d",&k);

    if (i >= 0 && j >= 0 && k >= 0) {
        hasil = i + j + k;
        printf("Rangkaian Seri Ketiga Tahanan adalah : %d",hasil);
    }
    else {
        printf("Masukkan tahanan tidak boleh negatif");
    }
    

}