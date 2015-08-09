/********************************************
*                                           *
*           Eyüp Can KILINÇDEMİR            *
*      KARADENİZ TEKNİK UNİVERSİTESİ        *
*          ceksoft.wordpress.com            *
*       eyupcankilincdemir@gmail.com        *
*                                           *
********************************************/

#include <stdio.h>
#include <stdlib.h>

void sirala(int,int);
void sirala(int birinci,int ikinci)     //algoritmanin calismasi icin sayilar fonksiyona
{                                       //buyukten kucuge sirali gonderilir
    int ebob;

    if(birinci >= ikinci)
    {
        ebob = ebob_bul(birinci,ikinci);
    }
    else
    {
       ebob = ebob_bul(ikinci,birinci);
    }

    printf("%d sayisi ile %d sayisinin ebobu %d \n",birinci,ikinci,ebob);

}

int ebob_bul(int,int);
int ebob_bul(int buyuk_sayi,int kucuk_sayi) //fonksiyon kucuk sayi 0 olana kadar kendini cagirir
{                                           //her cagirmada mod alinip sayilar yer degistirilir
    if(kucuk_sayi == 0)
    {
        return buyuk_sayi;
    }
    else
    {
        return ebob_bul(kucuk_sayi,buyuk_sayi % kucuk_sayi);
    }

}

int main()
{
    printf("Programdan cikmak icin -1 giriniz.\n");

    int sonsuz_dongu = 0;
    int birinci_sayi,ikinci_sayi;

    while(sonsuz_dongu < 1)
    {
        printf("Birinci sayiyi giriniz: ");
        scanf("%d",&birinci_sayi);

        if(birinci_sayi == -1)                  //programdan cikilmak istenip istenilmedigine bakilir.
        {
            printf("Programdan ciktiniz :)");
            break;
        }

        printf("Ikinci sayiyi giriniz: ");
        scanf("%d",&ikinci_sayi);

        if(ikinci_sayi == -1)                   //programdan cikilmak istenip istenilmedigine bakilir.
        {
            printf("Programdan ciktiniz :)");
            break;
        }
        if(birinci_sayi <= 0 || ikinci_sayi <= 0)       //negatif sayi girilmesini onlemek icin kosul konuldu
        {
            printf("Pozitif tam sayi giriniz.\n");
        }
        else
        {
            sirala(birinci_sayi,ikinci_sayi);
        }
    }
    return 0;
}

