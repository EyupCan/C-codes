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
    int sayi,mod;

    printf("Tek sayi mi cift sayimi anlamak icin bir tamsayi giriniz:");
    scanf("%d",&sayi);

    mod = sayi % 2 ;

    if (mod==1)
    {
        printf("Girdiginiz sayi bir tek sayidir.");
    }
    if (mod==0)
    {
        printf("Girdiginiz sayi bir cift sayidir.");
    }

    return 0;
}

