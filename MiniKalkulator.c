/* Nama File : MiniKalkulator.c */
/* Deskripsi : Klasifikasi Opreasi Aritmatika sembarang*/
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    /*Kamus*/
    int iA; /* Bilangan Pertama */
    int iB; /* Bilangan Kedua */
    int hasil; /* Hasil Operasi bilangan */
    char Operasi; /* Operasi Kalkulator */
    float hasilbg; /* Hasil bagi bilangan */

    /*Algoritma*/
    printf("Insert Character :");
    scanf("%c",&Operasi);
    printf("Masukkan nilai Pertama : ");
    scanf("%d",&iA);
    printf("Masukkan nilai Kedua : ");
    scanf("%d",&iB);

    if (Operasi == 'a' || Operasi == 'A') {
        hasil = iA + iB;
        printf("%d",hasil);
    } 
    
    else if (Operasi == 'b' || Operasi == 'B') {
        hasil = iA - iB;
        printf("%d",hasil);
    } 
    
    else if (Operasi == 'c' || Operasi == 'C') {
        hasil = iA * iB;
        printf("%d",hasil);
    } 
    
    else if (Operasi == 'd' || Operasi == 'D') {
        hasilbg = (float)iA / iB;
        printf("%f",hasilbg);
    } 
    
    else if (Operasi == 'e' || Operasi == 'E') {
        hasil = iA % iB;
        printf("%d",hasil);
    } 
    
    else if (Operasi == 'f' || Operasi == 'F') {
        hasil = iA / iB;
        printf("%d",hasil);
    } 
    
    else {
        printf("Bukan pilihan menu yang benar");
    }
    
    return 0;
}