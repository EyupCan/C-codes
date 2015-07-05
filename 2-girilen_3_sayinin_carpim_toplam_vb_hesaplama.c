/********************************************
*                                           *
*           Eyüp Can KILINÇDEMİR            *
*      KARADENİZ TEKNİK UNİVERSİTESİ        *
*          ceksoft.wordpress.com            *
*       eyupcankilincdemir@gmail.com        *
*                                           *
********************************************/

#include<stdio.h>

int main ()
{

    int sayi1,sayi2,sayi3,toplam,carpim,en_buyuk,en_kucuk,a,b;
    float ortalama;

    printf("Girdiginiz 3 sayiyinin toplamini, carpimini, ortalamasini ve hangisinin en buyuk hangisinin en kucuk oldugunu soyleyelim\n");

    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);

    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d",&sayi3);

    if (sayi1>-32768 && sayi1<32767 && sayi2>-32768 && sayi2<32767 && sayi3>-32768 && sayi3<32767)
    {

        toplam = sayi1 + sayi2 + sayi3;
        carpim = sayi1 * sayi2 * sayi3;
        ortalama = (float)toplam/3;

        if (sayi1<sayi2)
        {
            a=sayi1;
            b=sayi2;
        }
        else
        {
            a=sayi2;
            b=sayi1;
        }
        if (a<sayi3)
        {
            en_kucuk = a;
        }
        else
        {
            en_kucuk = sayi3;
        }
        if (b>sayi3)
        {
            en_buyuk = b;
        }
        else
        {
            en_buyuk = sayi3;
        }

        printf("Toplamlari:%d\nCarpimlari:%d\nOrtalamalari:%.3f\nEnbuyuk:%d\nEnkucuk:%d",toplam,carpim,ortalama,en_buyuk,en_kucuk);

    }
    else
    {
        printf("Girdiginiz degerlerden biri sayi degildir");
    }
    return 0;
}

