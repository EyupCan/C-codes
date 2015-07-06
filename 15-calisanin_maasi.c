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
    int yuzde=9;
    float maas,satis;

    maas = 0;

    printf("Programdan cıkmak icin -1 giriniz.\n");
    printf("Turk lirasi cinsinden satis tutarini giriniz:");
    scanf("%f",&satis);

    while(satis != -1)
    {

        maas = satis * yuzde / 100;
        maas = maas + 200;
        printf("Maasi %.2f TL dir.\n",maas);

        printf("Turk lirasi cinsinden satis tutarini giriniz:");
        scanf("%f",&satis);
    }

    if(satis == -1)
    {
        printf("Program sonlandirilmistir.");
    }
    return 0;
}

