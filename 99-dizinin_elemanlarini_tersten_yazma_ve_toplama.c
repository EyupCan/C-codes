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

#define DIZI_BOYUT 15

int dizi_eleman_topla(int[],int);
int dizi_eleman_topla(int dizimiz[],int boyut)      //recursive olarak elemanlari toplar
{
    if(boyut == 1)
    {
        return dizimiz[0];
    }
    else
    {
        return dizimiz[boyut - 1] + dizi_eleman_topla(dizimiz,boyut - 1);   //Son elemandan itibaren ilk elemana ulasana kadar kendini cagirir
    }                                                                       //ve bunlari toplar
}

void dizi_eleman_basma(int[],int);
void dizi_eleman_basma(int dizimiz[],int dizi_boyut)
{
    if(dizi_boyut > 0)                  //Dizinin boyutu 0 dan buyukse kendini tekrar cagirir
    {
        dizi_eleman_basma(&dizimiz[1],dizi_boyut - 1);  //Fonksiyon ikinci elemanin adresini ve dizi boyutunu bir azaltarak kendini cagirir
        printf("%d ",dizimiz[0]);
    }
}


int main()
{
    int dizi[DIZI_BOYUT] = {1,32,549,87,65,1,312,648,641,3,25,153,15,3,74};

    dizi_eleman_basma(dizi,DIZI_BOYUT);

    int toplam;
    toplam = dizi_eleman_topla(dizi,DIZI_BOYUT);
    printf("\nDizimizin elemanlarinin toplami = %d",toplam);

    return 0;
}

