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

int cift_sayi(int);
int cift_sayi(int gelen_sayi)
{
    if((gelen_sayi % 2) == 0)   //cift sayiysa 1 dondurulur
    {
        return 1;
    }
    else                        //tek sayiysa sifir dondurulur
    {
        return 0;
    }
}

void sonuc_yazdir(int);
void sonuc_yazdir(int sonuc_sayisi)
{
    if(sonuc_sayisi == 1)
    {
        printf("Girilen sayi cift sayidir.");
    }
    else
    {
        printf("Girilen sayi cift sayi degildir.");
    }
}

int main()
{
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    int sonuc;

    sonuc = cift_sayi(sayi);        //cift sayi kontrol fonksiyonunun cagrimi

    sonuc_yazdir(sonuc);            //sonuc yazdirma fonksiyonun cagrimi

    return 0;
}

