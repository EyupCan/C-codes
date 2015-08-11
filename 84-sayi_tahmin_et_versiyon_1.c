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

#define MAX_SAYI 1000

int tahmin_sorusu_sor();
int tahmin_sorusu_sor()
{
    int tahmin;

    tahmin = (rand() % MAX_SAYI) + 1;       //random bir sayi uretilir

    return tahmin;
}

int main()
{
    srand(time(NULL));                      //rand fonksiyonunun random lugunu saglamak icin time fonksiyonu kullanilir

    char devam_edilme_durumu = 'E';
    while(devam_edilme_durumu != 'H')
    {
        printf("1 - %d arasinda bir sayi tuttum.\nTahmin edebilirmisin?\n",MAX_SAYI);

        int sonsuz_dongu = 0;
        int tutulan_sayi;
        tutulan_sayi = tahmin_sorusu_sor();

        while(sonsuz_dongu < 1)
        {
            int oyuncunun_tahmini;
            printf("Tahmininizi giriniz: ");
            scanf("%d",&oyuncunun_tahmini);

            if(tutulan_sayi == oyuncunun_tahmini)   //dogru ceapta icteki donguden cikilir
            {
                printf("Harika bildiniz :):)\n");
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
    return 0;
}

