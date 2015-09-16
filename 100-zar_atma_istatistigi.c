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

#define SATIR 6
#define SUTUN 6
#define ZAR_ATIS_SAYISI 3600
#define ZAR_TOPLAMLARI 11


void iki_boyutlu_zar_atma(int [][SUTUN],int []);
void iki_boyutlu_zar_atma(int eleman_atancak_dizi[][SUTUN],int zar_toplamlari_dizisi[])
{
    int sayici,zar_1,zar_2,toplam_zar;

    for(sayici = 1; sayici <= ZAR_ATIS_SAYISI; sayici++)
    {
        zar_1 = 1 + (rand() % 6);       //1-2-3-4-5-6 sayilarindan biri random atanir
        zar_2 = 1 + (rand() % 6);       //1-2-3-4-5-6 sayilarindan biri random atanir
        eleman_atancak_dizi[zar_1 - 1][zar_2 - 1]++;        //Dizide gelen rakamlarin oldugu yerleri 1 arttirir

        toplam_zar = zar_1 + zar_2;
        zar_toplamlari_dizisi[toplam_zar - 2]++;            //Zarlarin toplamlarinin denk geldigi elemani 1  arttirir

    }
}

void iki_boyutlu_dizi_yazdir(int [][SUTUN]);
void iki_boyutlu_dizi_yazdir(int yazilcak_dizi[][SUTUN])       //Dizinin elemanlarini ekrana yazar
{
    int satir,sutun;

    printf("\t1\t2\t3\t4\t5\t6\n\n");

    for(satir = 0; satir <= SATIR - 1; satir++)                     //Satirlari dondurur
    {
        printf("%d\t",satir + 1);

        for(sutun = 0; sutun <= SUTUN - 1; sutun++)                 //Sutunlari dondurur
        {
            printf("%-4d\t",yazilcak_dizi[satir][sutun]);
        }
        printf("\n");
    }

    printf("\n");
}

void dizi_yazdir(int []);
void dizi_yazdir(int yazilcak_dizi[])                  //Dizinin elemanlarini ekrana yazar
{
    int sira;

    printf("2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
    for(sira = 0; sira <= ZAR_TOPLAMLARI - 1; sira++)
    {
        printf("%-6d  ",yazilcak_dizi[sira]);
    }
}



int main()
{
    srand(time(NULL));

    int dizimiz[SATIR][SUTUN] = { 0 };
    int zar_toplam_dizi[ZAR_TOPLAMLARI] = { 0 };


    printf("Ikı boyutlu bos dizimiz\n\n");
    iki_boyutlu_dizi_yazdir(dizimiz);

    iki_boyutlu_zar_atma(dizimiz,zar_toplam_dizi);

    printf("%d adet zar ciftinin atilmasi sonucu gelen zarlarin toplam adeti\n\n",ZAR_ATIS_SAYISI);
    iki_boyutlu_dizi_yazdir(dizimiz);

    printf("11 farkli toplam durumunun %d atis sonunda gelme adetleri\n\n",ZAR_ATIS_SAYISI);
    dizi_yazdir(zar_toplam_dizi);
    return 0;
}

