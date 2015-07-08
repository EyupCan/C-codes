/********************************************
*                                           *
*           Eyüp Can KILINÇDEMİR            *
*      KARADENİZ TEKNİK UNİVERSİTESİ        *
*          ceksoft.wordpress.com            *
*       eyupcankilincdemir@gmail.com        *
*                                           *
********************************************/

#include<stdio.h>

int main()

{
    int sayi=3,sayici=0;

    printf("Sayi\tsayi+2\tsayi+4\tsayi+6\n");

    while(sayici<5) {

        printf("%d\t%d\t%d\t%d\n",sayi,sayi+2,sayi+4,sayi+6);
        sayi=sayi+3;
        sayici++;

        }
        return 0;
}

