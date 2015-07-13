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
    int sayi,sayi_adeti,yildiz_sayisi;

    for (sayi_adeti = 1;sayi_adeti <= 5;sayi_adeti++) //Kac kere dongunun donecegi belirlenir
    {
        printf("Basilacak olan yildizlarin sayisini giriniz(1-30 arasi):");
        scanf("%d",&sayi);

        if(sayi>=1 && sayi<=30) // * Sadece 1-30 arasi bir sayi girilirse basilir
        {
            printf("%d\t",sayi); //

            for (yildiz_sayisi = 1;yildiz_sayisi <= sayi;yildiz_sayisi++) //Girilen sayi kadar dongu doner ve yildiz basar
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("1-30 arasi bir sayi giriniz.\n"); //Sayi 1-30 arasi degilse yazar
        }
    }
    return 0;
}

