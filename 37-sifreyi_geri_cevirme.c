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
    int sifreli_sayi,sayi,binler,yuzler,onlar,birler,ara_degisken;

    printf("Programdan cikmak icin -1 giriniz.\n");
    printf("Sifresi cozulecek sayiyi giriniz:");
    scanf("%d",&sayi);

    while (sayi!=-1)
    {
        binler = sayi / 1000;           //sayinin binler basamagindaki rakam degiskene atanir
        binler = binler + 3;
        binler = binler % 10;

        yuzler = sayi / 100;            //sayinin yuzler basamagindaki rakam degiskene atanir
        yuzler = yuzler + 3;
        yuzler = yuzler % 10;

        onlar  = sayi / 10;             //sayinin onlar basamagindaki rakam degiskene atanir
        onlar  = onlar + 3;
        onlar  = onlar % 10;

        birler = sayi % 10;             //sayinin binler basamagindaki rakam degiskene atanir
        birler = birler + 3;
        birler = birler % 10;

        ara_degisken = birler;          //birler basamagi yuzler basamagiyla yer degistirir
        birler = yuzler;
        yuzler = ara_degisken;

        ara_degisken = onlar;           //onlar basamagi birler basamagiyla yer degistirir
        onlar = binler;
        binler = ara_degisken;

        sifreli_sayi = (1000*binler) + (100*yuzler) + (10*onlar) + (birler);    //rakamlar basamak degerleriyle carpilip toplanir

        printf("Sifreli sayiniz %d dir. Gonderilen sayiniz %d dir.\n",sayi,sifreli_sayi);

        printf("Sifresi cozulecek sayiyi giriniz:");
        scanf("%d",&sayi);

    }
    printf("Programdan Sonlandirilmistir.");
    return 0;
}

