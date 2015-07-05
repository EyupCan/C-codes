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

    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);

    if (sayi1<sayi2)
    {
        printf("%d Daha buyuktur.",sayi2);
    }
    if (sayi1>sayi2)
    {
        printf("%d Daha buyuktur.",sayi1);
    }
    if (sayi1==sayi2)
    {
        printf("Sayilar esittir.");
    }

    return 0;
}

