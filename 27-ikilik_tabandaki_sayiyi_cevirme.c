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

int main()
{
    int basamak_sayisi,bolum,basamak,onluk_tabanda_sayi,ara_atama;
    long int ikilik_tabanda_sayi;

    printf("Ikilik tabanda bir sayi giriniz:");
    scanf("%ld",&ikilik_tabanda_sayi);

    ara_atama = ikilik_tabanda_sayi;
    basamak_sayisi    = 0;

    while ( ara_atama > 0) //ikilik tabandaki sayinin kac basamakli oldugu bulunur
    {
        bolum = ara_atama / 10;
        ara_atama = bolum;
        basamak_sayisi++;
    }
    onluk_tabanda_sayi = 0;
    while( basamak_sayisi >= 0 )
    {
        basamak = ikilik_tabanda_sayi / pow(10,basamak_sayisi); //basamaktaki rakami bulmak icin bolme yapilir
        basamak = basamak % 10;                                 // bolmeden sonra son rakam bulunur
        onluk_tabanda_sayi = onluk_tabanda_sayi + (basamak*pow(2,basamak_sayisi)); //rakamla ikilik tabandaki degeri carpilir.
        basamak_sayisi--;
    }
    printf("Ikilik tabandaki %d sayisi Onluk tabanda %d sayisina esittir.",ikilik_tabanda_sayi,onluk_tabanda_sayi);
    return 0;
}

