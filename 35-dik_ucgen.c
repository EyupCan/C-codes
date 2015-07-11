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
    int sayi_1,sayi_2,sayi_3,ara_degisken; //i sayilari degistirmek icin ara degisken

    printf("Cıkmak icin -1 giriniz.\n");
    printf("Birinci sayiyi giriniz:");
    scanf("%d",&sayi_1);

    while(sayi_1!=-1) //-1 girildiginde donguden cikmaktadir
    {
        printf("Ikinci sayiyi giriniz:");
        scanf("%d",&sayi_2);

        printf("Ucuncu sayiyi giriniz:");
        scanf("%d",&sayi_3);

        while (sayi_1 > sayi_2 || sayi_2 > sayi_3 || sayi_1 > sayi_3) //girilen 3 sayiyi kucukten buyuge siralar
            {
                if (sayi_1>sayi_2)
                {
                    ara_degisken = sayi_1;
                    sayi_1 = sayi_2;
                    sayi_2 = ara_degisken;
                }
                if (sayi_2>sayi_3)
                {
                    ara_degisken = sayi_2;
                    sayi_2 = sayi_3;
                    sayi_3 = ara_degisken;
                }
            }
         if ((sayi_1 * sayi_1) + (sayi_2 * sayi_2) == ((sayi_3 * sayi_3))) // en buyuk sayinin kontolunu yapar sadece
             {
                 printf("Bu sayilarla bir Dik Ucgen olusturulabilir\n%d uzunluguna sahip kenar dik kenardir.\n",sayi_3);

             }
         else
            {
                 printf("Bu sayilarla bir Dik Ucgen olusturulamaz.\n");
            }
         printf("Birinci sayiyi giriniz:");
         scanf("%d",&sayi_1);
    }
    printf("Program sonlandirilmistir.");
    return 0;
}

