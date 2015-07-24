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

void basamak_ayirma(int,int);


int main()
{
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);


    int bolum;
    int basamak_sayici = 0;
    int basamak_sayisi_bulmadaki_sayi;
    basamak_sayisi_bulmadaki_sayi = sayi;

    while (basamak_sayisi_bulmadaki_sayi != 0)
    {
        bolum = basamak_sayisi_bulmadaki_sayi / 10;
        basamak_sayisi_bulmadaki_sayi = bolum;
        basamak_sayici++;
    }

    printf("Basamak sayisi = %d\n",basamak_sayici);
    basamak_ayirma(sayi,basamak_sayici);

    return 0;
}
void basamak_ayirma(int sayi , int basamak_sayici)
{
    int kalan;
    int bolum;
    while (basamak_sayici != 0)
    {
        bolum = sayi / pow(10,basamak_sayici-1);
        kalan = bolum % 10;
        printf("%d  ",kalan);
        basamak_sayici--;
    }
}

