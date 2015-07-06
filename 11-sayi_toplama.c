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
    int sayi,toplam;
    printf("1'den 10'a kadar olan sayilari toplama\n");

    sayi = 0;
    toplam = 0;
    while(sayi<11)
    {
        toplam = toplam + sayi;
        sayi = sayi + 1;
    }
    printf("Sayilarin toplami %d'dir",toplam);

    return 0;
}

