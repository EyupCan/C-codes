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
    int bosluk_sayisi,boyut,yildiz_sayisi,kontrol_sayicisi,eskanar_dortgen_sayisi,dortgen_kontrol_sayicisi;
    float ara_bosluk_sayisi;

    printf("Kac adet sekil girilecegini giriniz(1-19 arasi):");
    scanf("%d",&eskanar_dortgen_sayisi);

    if((eskanar_dortgen_sayisi >= 1) && (eskanar_dortgen_sayisi <= 19)) //belirledigimiz araliktami kontrol edilir
    {
        printf("Bir tane tek tam sayi giriniz:");
        scanf("%d",&boyut);

        for(dortgen_kontrol_sayicisi = 1 ;dortgen_kontrol_sayicisi <= eskanar_dortgen_sayisi ;dortgen_kontrol_sayicisi++)
        {
            if (boyut % 2 == 1)                                             //boyutun tek tam sayi olup olmadigi kontrol edilir
            {

                ara_bosluk_sayisi = boyut / 2;                              //bosluk sayisi ile boyut arasindaki iliski
                bosluk_sayisi = floor(ara_bosluk_sayisi);                   //sayiyi kendinden kucuk bir alt sayiya tamamlar

                yildiz_sayisi = 1;

                while (yildiz_sayisi <= boyut)                              //eskanar dortgenin ust kısmı basilir
                {
                    for(kontrol_sayicisi = 1 ;kontrol_sayicisi <= bosluk_sayisi ;kontrol_sayicisi++) //bosluklar bastirilir
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
                    yildiz_sayisi = yildiz_sayisi - 2;

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
            else                                //break yapisiyla fordan cikilmistir
            {
                printf("Tek tamsayi girmediniz!");
                break;
            }
        }
    }
    else
    {
        printf("1-19 arasi bir sayi girmediniz!");
    }
    return 0;
}

