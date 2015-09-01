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

#define DIZI_BOYUTU 10

void dizi_yazdir(int []);
void dizi_yazdir(int yazilcak_dizi[])       //dizinin elemanlarini ekrana yazar
{
    int sira;

    for(sira = 0; sira <= DIZI_BOYUTU - 1; sira++)
    {
        printf("%d  ",yazilcak_dizi[sira]);
    }
}

void bubble_sort(int []);
void bubble_sort(int siralanacak_dizi[])        //diziyi kucukten buyuge dogru siralar
{
    int tur_sayisi,gezilcek_eleman_sayisi;
    gezilcek_eleman_sayisi = DIZI_BOYUTU;

    for(tur_sayisi = 1; tur_sayisi <= DIZI_BOYUTU - 1; tur_sayisi++)   //eleman sayisindan 1 az olacak sekilde diziyi turlar
    {
        int ara_deger_tutucu,sira;
        for(sira = 0; sira <= gezilcek_eleman_sayisi - 2; sira++)   //diziyi gezer ve siralar
        {                                                       
            if(siralanacak_dizi[sira] > siralanacak_dizi[sira + 1])
            {
                ara_deger_tutucu = siralanacak_dizi[sira];
                siralanacak_dizi[sira] = siralanacak_dizi[sira + 1];
                siralanacak_dizi[sira + 1] = ara_deger_tutucu;
            }
        }
        gezilcek_eleman_sayisi--;           //her tur sonunda en buyuk eleman bulundugu icin gezilcek eleman sayisini azaltir
    }
}

int main()
{
    int dizi[DIZI_BOYUTU] = {10,100,2,155,3,135,0,125,-1,1002};

    printf("--Dizinin Siralanmamis Hali-- \n");
    dizi_yazdir(dizi);

    bubble_sort(dizi);

    printf("\n--Dizinin Siralanmis Hali--\n");
    dizi_yazdir(dizi);

    return 0;
}

