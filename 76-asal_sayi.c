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

#define MAX_SAYI 1000

int asal_sayi_bul(int);
int asal_sayi_bul(int kontrol_edilen_sayi)
{
    int bolen_sayi;
    int sayinin_yarisi;

    sayinin_yarisi = kontrol_edilen_sayi / 2;                   // sayi kendinin yarisindan buyuk sayilara bolunemez

    for(bolen_sayi = 2 ; bolen_sayi <= sayinin_yarisi ;bolen_sayi++)
    {
        if ( (kontrol_edilen_sayi % bolen_sayi) == 0 )          //sayinin asalligi kontrol edilir
        {
            return 0;                           //asal degilse 0 dondurulur
        }
    }
    return 1;                                   //asalsa 1 dondururulur
}


int main()
{
    printf("Asal Sayilar\n");

    int sayi;
    int kontrol_sonucu;
    int asal_sayi_adeti = 0;

    for(sayi = 2 ;sayi <= MAX_SAYI ; sayi++)
    {
        kontrol_sonucu = asal_sayi_bul(sayi);

        if(kontrol_sonucu == 1)         //1 donduyse sayi yazdirilir.
        {
            printf("%d\n",sayi);
            asal_sayi_adeti++;
        }

    }
    printf("1 ile %d arasindaki asal sayilarin adeti = %d",MAX_SAYI,asal_sayi_adeti);
    return 0;
}

