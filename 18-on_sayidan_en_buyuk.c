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
    int sayi,en_buyuk,sayici=1;

    printf("1. sayiyi giriniz:");
    scanf("%d",&en_buyuk);

    while(sayici<10)
    {
        printf("%d. sayiyi giriniz:",sayici+1);
        scanf("%d",&sayi);
        if(en_buyuk < sayi)
        {
            en_buyuk = sayi;
        }
        else
        {
            en_buyuk = en_buyuk;
        }
        sayici++;
    }
    printf("En buyuk sayi %d dir.",en_buyuk);

    return 0;
}

