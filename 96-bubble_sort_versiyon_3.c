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

#define DIZI_BOYUTU 11

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
        int siralama_sonucu;

        siralama_sonucu = dizi_kontrol_et(siralanacak_dizi);

        if(siralama_sonucu == 1)        //dizi sirali ise fonksiyondan cikar ve tur sayisini ekrana basar
        {
            printf("\n%d turda dizi siralanmistir",tur_sayisi - 1);
            break;
        }

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

int dizi_kontrol_et(int []);
int dizi_kontrol_et(int kontrol_edilecek_dizi[])
{
    int sira;
    for(sira = 0; sira <= DIZI_BOYUTU - 2;sira++)   // dizi sirali degilse 0 dondurur
    {
        if(kontrol_edilecek_dizi[sira] > kontrol_edilecek_dizi[sira + 1])
        {
            return 0;
        }
    }
    return 1;           //dizi sirali ise 1 dondurur
}

int main()
{
    int dizi[DIZI_BOYUTU] = {10,20,30,40,50,5,60,70,80,65,90};

    printf("--Dizinin Siralanmamis Hali-- \n");
    dizi_yazdir(dizi);

    bubble_sort(dizi);

    printf("\n--Dizinin Siralanmis Hali--\n");
    dizi_yazdir(dizi);

    return 0;
}

