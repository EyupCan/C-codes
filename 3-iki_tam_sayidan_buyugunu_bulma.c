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
    int sayi1,sayi2;

    printf("Iki tam sayiyi karsilastirmak icin Birinci sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);

    if (sayi1<sayi2)
    {
        printf("En buyuk sayi %d'dir.",sayi2);
    }
    if (sayi1>sayi2)
    {
        printf("En buyuk sayi %d'dir.",sayi1);
    }
    if (sayi1==sayi2)
    {
        printf("Sayilar birbirine esittir.");
    }

    return 0;
}

