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
    int sayi1,sayi2,mod;

    printf("Girdiginiz sayilardan birinci ikincinin katimidir bulalim\n");

    printf("Birinci sayiyi giriniz:");
    scanf("%d",&sayi1);

    printf("Ikinci sayiyi giriniz:");
    scanf("%d",&sayi2);

    mod = sayi1 % sayi2;

    if (mod==0)
    {
        printf("%d sayisi %d sayinin tam katidir.",sayi1,sayi2);
    }
    else
    {
        printf("%d sayisi %d sayisinin tam kati degildir.",sayi1,sayi2);
    }

    return 0;
}

