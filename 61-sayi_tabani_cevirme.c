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

#define MAKSIMUM_SAYI 255
#define MAKSIMUM_TABAN 7

int main()
{
    printf("Ikilik Taban Sekizlik Taban Onluk Taban Onaltilik Taban\n");
    int sayi;

    for(sayi = 1 ;sayi <= MAKSIMUM_SAYI ;sayi++)
    {
        int ikilik_tabandaki_sayi = 0;
        int donusturulen_sayi;
        int bolum;
        int maksimum_taban = 7;
        donusturulen_sayi = sayi;
        while(donusturulen_sayi != 0)
        {
            bolum = donusturulen_sayi / pow(2,maksimum_taban);

            bolum = bolum * pow(10,maksimum_taban);             //en anlamli basamak elde edilir

            ikilik_tabandaki_sayi = ikilik_tabandaki_sayi + bolum;

            donusturulen_sayi = donusturulen_sayi - pow(2,maksimum_taban); //sayi ikinin kuvvetleriyle kucultulur

            if(donusturulen_sayi < 0)                   //negatif kuculme durumunda sonsuz donguye girmemesi icin tekrar toplanir
            {
                donusturulen_sayi = donusturulen_sayi + pow(2,maksimum_taban);
            }
            maksimum_taban--;                           //bir sonraki en anlamli basamaga gecilir
        }
        printf("%12d%15d%12o%16X\n",ikilik_tabandaki_sayi,sayi,sayi,sayi);  //c de 8lik ve 16lik tabanlar otomatik cevrilir
    }
    return 0;
}

