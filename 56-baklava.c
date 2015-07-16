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
    int bosluk_sayisi,boyut,yildiz_sayisi,kontrol_sayicisi;
    float ara_bosluk_sayisi;

    printf("Bir tane tek tam sayi giriniz:");
    scanf("%d",&boyut);

    if (boyut % 2 == 1)                                             //boyutun tek tam sayi olup olmadigi kontrol edilirŝ
    {

        ara_bosluk_sayisi = boyut / 2;                              //bosluk sayisi ile boyut arasindaki iliski
        bosluk_sayisi = floor(ara_bosluk_sayisi);                   //sayiyi kendinden kucuk bir alt sayiya tamamlar

        yildiz_sayisi = 1;

        while (yildiz_sayisi <= boyut)                              //eskanar dortgenin ust kısmı basilir
        {
            for(kontrol_sayicisi = 1 ;kontrol_sayicisi <= bosluk_sayisi; kontrol_sayicisi++) //bosluklar bastirilir
            {
                printf(" ");
            }
            for (kontrol_sayicisi = 1 ;kontrol_sayicisi <= yildiz_sayisi ;kontrol_sayicisi++) //yildizlar bastirilir
            {
                printf("*");
            }
            printf("\n");
            yildiz_sayisi = yildiz_sayisi + 2;
            bosluk_sayisi--;
        }

        bosluk_sayisi = 1;

        while (yildiz_sayisi >= 1)                              //eskanar dortgenin alt kismi basilir
        {
            yildiz_sayisi = yildiz_sayisi -2;

            for (kontrol_sayicisi = 1 ;kontrol_sayicisi <= bosluk_sayisi ;kontrol_sayicisi++) //bosluklar bastirilir
            {
                printf(" ");
            }
            for (kontrol_sayicisi = 1 ;kontrol_sayicisi <= yildiz_sayisi - 2 ;kontrol_sayicisi++) //yildizlar bastirilir
            {
                printf("*");
            }
            printf("\n");
            bosluk_sayisi++;

        }
    }
    else
    {
        printf("Tek tamsayi girmediniz!");
    }
    return 0;
}

