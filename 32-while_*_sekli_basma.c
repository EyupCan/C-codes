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

int main()
{
    int kalan,sayi,sutun,satir;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    satir = 1;

    while (satir <= sayi)
    {
        sutun = 1;
        while (sutun <= sayi)
        {

        kalan = satir % 2;

        if (kalan == 1) //satir numarasi tekse "* " basar
        {
            printf("* ");
        }
        else           //satir numarasi ciftse " *" basar
        {
            printf(" *");
        }
        sutun++;
        }
        printf("\n");
        satir++;
    }
    return 0;
}

