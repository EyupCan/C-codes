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

#define DIZI_BOYUT 10

int main()
{

    int dizi[DIZI_BOYUT] = {10,20,12,45,62,124,5,1,523,5};

    printf("Dizideki sayilarin orjinal sirasi\n");

    int sira;
    for(sira = 0 ;sira <= DIZI_BOYUT - 1 ;sira++)       //dizinin elemanlarini ekrana yazar
    {
        printf("%d  ",dizi[sira]);
    }

    int tur_sayisi,ara_deger_tutucu;
    for(tur_sayisi = 1 ; tur_sayisi <= DIZI_BOYUT - 1 ;tur_sayisi++)    //eleman sayisindan 2 az olcak sekilde diziyi turlar
    {
        for(sira = 0 ;sira <= DIZI_BOYUT - 2 ;sira++)       //diziyi bastan sona gezer ve siralar
        {
            if(dizi[sira] > dizi[sira + 1])
            {
                ara_deger_tutucu = dizi[sira];
                dizi[sira] = dizi [sira + 1];
                dizi[sira + 1] = ara_deger_tutucu;
            }
        }
    }

    printf("\nVerilerin kucukten buyuge siralanmis hali\n");

    for(sira = 0 ;sira <= DIZI_BOYUT - 1 ;sira++)       //dizinin elemanlarini ekrana yazar
    {
        printf("%d  ",dizi[sira]);
    }

    return 0;
}

