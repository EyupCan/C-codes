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

long int kuvvet_alma(int,int);
long int kuvvet_alma(int taban,int us)
{
    if(taban == 0)              //girilen sayi sifirsa sonuc sifir dondurur
    {
        return 0;
    }
    if(taban > 0 && us == 0)    //sayinin ussu sifir ise sonuc bir dondurur
    {
        return 1;
    }
    if(taban > 0 && us == 1)    //kuvvet bir ise sonuc sayinin kendisi dondurur
    {
        return taban;
    }
    if(taban > 0 && us > 0)     // us sıfır olana kadar fonksiyon kendini cagirir
    {
        return taban * kuvvet_alma(taban,us-1);
    }

}

int main()
{
    char program_cikisi = 'e';
    while(program_cikisi != 'h')
    {

        int sayi = 0;
        printf("Kuvveti alinacak sayiyi giriniz: ");
        scanf("%d",&sayi);

        int kuvvet = 0;
        printf("Kuvveti giriniz: ");
        scanf("%d",&kuvvet);

        long int sonuc;

        if(sayi >= 0 && kuvvet >= 0)        //sayi ve kuvvet negatif girilmediyse fonksiyon cagrisi yapilir
        {
            sonuc = kuvvet_alma(sayi,kuvvet);
            printf("tabani %d kuvveti %d olan sayinin sonucu = %ld\n",sayi,kuvvet,sonuc);
        }
        else
        {
            printf("Sayiyi veya Kuvveti negatif girdiniz!!\n");
        }

        printf("Baska sayi hesaplamak istiyormusunuz?(e veya h): "); //while dongusunun kosul kontrol girdisi yapilir
        scanf(" %c",&program_cikisi);
    }
    printf("Programdan ciktiniz.");
    return 0;
}

