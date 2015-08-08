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

int basamak_sayisi_bulma(int);
int basamak_sayisi_bulma(int girilen_sayi)
{
    int basamak_sayisi;
    while(girilen_sayi != 0)
    {
        girilen_sayi = girilen_sayi / 10; //sayiyi her seferinde 10'a bolup sıfıra yaklastirip basamak degerini buluyoruz
        basamak_sayisi++;
    }
    return basamak_sayisi;
}

void girilen_sayi_ters_cevir(int,int);
void girilen_sayi_ters_cevir(int girilen_sayi,int basamak_sayisi)
{
    int bolum;
    int yeni_basamak_degeri = 0;
    int yazilan_rakam;

    while(basamak_sayisi != 0)      //sayinin son hanesi bulunup yazdirilir
    {
        bolum = girilen_sayi / pow(10,yeni_basamak_degeri);
        yazilan_rakam = bolum % 10;

        printf("%d",yazilan_rakam);

        basamak_sayisi--;
        yeni_basamak_degeri++;
    }
    printf("\n");
}

int main()
{
    printf("Programdan cikmak icin -1 giriniz.\n");

    int sonsuz_dongu = 0;

    while(sonsuz_dongu < 1)
    {
        int sayi;
        printf("Ters cevrilecek sayiyi giriniz: ");
        scanf("%d",&sayi);

        if(sayi == -1)
        {
            printf("Programdan ciktiniz :)");
            break;
        }

        int basamak_sayisi;
        basamak_sayisi = basamak_sayisi_bulma(sayi);

        printf("Girilen sayi = %d \n",sayi);
        printf("Ters Cevrilmis hali = ");
        girilen_sayi_ters_cevir(sayi,basamak_sayisi);
    }
    return 0;
}

