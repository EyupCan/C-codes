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
    int sayi1,sayi2,kuvvet,dongu_kontrol;

    printf("Kuvveti alincak sayiyi giriniz:");
    scanf("%d",&sayi1);

    printf("Kacinci kuvveti olcagini giriniz:");
    scanf("%d",&sayi2);

    dongu_kontrol = 1;
    kuvvet = 1;

    while(dongu_kontrol<=sayi2)
    {
        kuvvet = kuvvet * sayi1;
        dongu_kontrol = dongu_kontrol +1;
    }

    printf("%d sayisinin %d. kuvveti %d dir.",sayi1,sayi2,kuvvet);

    return 0;

}

