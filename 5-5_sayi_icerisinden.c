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
    int sayi1,sayi2,sayi3,sayi4,sayi5,en_kucuk,en_buyuk;

    printf("5 tam sayidan en buyugunu en kucugunu bulmak icin sayilari giriniz.\n");

    printf("Birinci sayi:");
    scanf("%d",&sayi1);

    printf("Ikinci sayi:");
    scanf("%d",&sayi2);

    printf("Ucuncu sayi:");
    scanf("%d",&sayi3);

    printf("Dorduncu sayi:");
    scanf("%d",&sayi4);

    printf("Besinci sayi:");
    scanf("%d",&sayi5);

    if (sayi1<sayi2)
    {
        en_buyuk=sayi2;
    }
    else
    {
        en_buyuk=sayi1;
    }
    if (en_buyuk<sayi3)
    {
        en_buyuk=sayi3;
    }
    else
    {
        en_buyuk=en_buyuk;
    }
    if (en_buyuk<sayi4)
    {
        en_buyuk=sayi4;
    }
    else
    {
        en_buyuk=en_buyuk;
    }
    if (en_buyuk<sayi5)
    {
        en_buyuk=sayi5;
    }
    else
    {
        en_buyuk=en_buyuk;
    }
     if (sayi1>sayi2)
    {
        en_kucuk=sayi2;
    }
    else
    {
        en_kucuk=sayi1;
    }
    if (en_kucuk>sayi3)
    {
        en_kucuk=sayi3;
    }
    else
    {
        en_kucuk=en_kucuk;
    }
    if (en_kucuk>sayi4)
    {
        en_kucuk=sayi4;
    }
    else
    {
        en_kucuk=en_kucuk;
    }
    if (en_kucuk>sayi5)
    {
        en_kucuk=sayi5;
    }
    else
    {
        en_kucuk=en_kucuk;
    }
    printf("\nEn buyuk sayi:%d\nEn kucuk sayi %d",en_buyuk,en_kucuk);
    return 0;
}

