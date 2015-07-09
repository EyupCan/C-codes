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
#include <math.h>

int main()
{
    int ara_basamak_sayici,basamak_bolum,sayi,ara_atama,bolum;

    printf("Icinde kac tane 7 oldugunu bulmak icin bir tam sayi giriniz:");
    scanf("%d",&sayi);

    ara_atama = sayi;
    int basamak_sayici=0;

    while (ara_atama >0)                //basamak sayisinin bulunmasi
    {
        basamak_bolum = ara_atama / 10;
        ara_atama     = basamak_bolum;
        basamak_sayici++;
    }

    ara_basamak_sayici = basamak_sayici; //basamak sayisinin degerinin kaybolmamamasi icin ara degisken
    int sayici_7=0;

    while ( ara_basamak_sayici >= 0)
    {
        bolum = sayi  / pow(10,ara_basamak_sayici); //sayinin bolunup parcalanmasi
        bolum = bolum % 10;                         //son hanedeki rakamin atanmasi

        if (bolum == 7)
        {
            sayici_7++;
        }
        ara_basamak_sayici--;
    }
    printf("Girdiginiz %d basamakli %d sayisinin %d basamagi 7 dir",basamak_sayici,sayi,sayici_7);
    return 0;
}

