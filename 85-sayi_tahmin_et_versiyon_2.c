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
#include <time.h>

int tahmin_sorusu_sor();
int tahmin_sorusu_sor()
{
    int tahmin;

    tahmin = (rand() % 1000) + 1;       //1-1000 arasinda random bir sayi uretilir

    return tahmin;
}

void tahmin_sayisi_sonucu(int);
void tahmin_sayisi_sonucu(int tahmin_sayisi)
{
    if(tahmin_sayisi == 10)
    {   printf("Dogru bildin :)\n");
        printf("Ahaaa Yakaladim siz taktigi biliyorsunuz :)\n");
    }
    else if(tahmin_sayisi < 10)
    {
        printf("Cok cabuk bildin :)\n");
        printf("Ya sanslisin yada taktigi biliyorsun :)\n");
    }
    else
    {
        printf("Bildin ama daha iyisini yapabilirsin :) \n");
    }
}

int main()
{
    srand(time(NULL));                      //rand fonksiyonunun random lugunu saglamak icin time fonksiyonu kullanilir

    char devam_edilme_durumu = 'E';
    while(devam_edilme_durumu != 'H')
    {
        printf("1 - 1000 arasinda bir sayi tuttum.\nTahmin edebilirmisin?\n");

        int tutulan_sayi;
        tutulan_sayi = tahmin_sorusu_sor();

        int oyuncunun_tahmin_sayisi = 0;

        int sonsuz_dongu = 0;
        while(sonsuz_dongu < 1)
        {
            int oyuncunun_tahmini;
            printf("Tahmininizi giriniz: ");
            scanf("%d",&oyuncunun_tahmini);

            oyuncunun_tahmin_sayisi++;  //her tahminde tahmin sayisi arttirilir

            if(tutulan_sayi == oyuncunun_tahmini)   //dogru cevapta icteki while dongusunden cikilir
            {
                tahmin_sayisi_sonucu(oyuncunun_tahmin_sayisi);
                break;
            }
            else                //soruya dogru cevap verilmez ise tahmine gore cevap uretilir
            {
                if(tutulan_sayi > oyuncunun_tahmini)
                {
                    printf("Kucuk bir sayi girdiniz tekrar deneyin \n");
                }
                else
                {
                    printf("Buyuk bir sayi girdiniz tekrar deneyin \n");
                }
            }
        }
        printf("Tekrar Oynamaya ne dersin? :) (E veya H): ");
        scanf(" %c",&devam_edilme_durumu);
    }
    printf("Oyundan ciktiniz :)");
    return 0;
}

