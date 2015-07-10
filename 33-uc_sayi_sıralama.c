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
    float sayi_1,sayi_2,sayi_3,ara_deger_tutucu;

    printf("Cıkmak icin -1 giriniz.\n");
    printf("Birinci sayiyi giriniz:");
    scanf("%f",&sayi_1);

    while(sayi_1!=-1)
    {
        printf("Ikinci sayiyi giriniz:");
        scanf("%f",&sayi_2);

        printf("Ucuncu sayiyi giriniz:");
        scanf("%f",&sayi_3);

        while (sayi_1>sayi_2 || sayi_2>sayi_3 || sayi_1>sayi_3) //sayilar kucukten buyuge sirali degilse donguye giriyor
        {
            if (sayi_1>sayi_2)                                  //birinci sayi ikinciden buyukse yer degistiriyor
            {
                ara_deger_tutucu=sayi_1;
                sayi_1=sayi_2;
                sayi_2=ara_deger_tutucu;
            }
            if (sayi_2>sayi_3)                                  //mevcut ikinci sayi ucuncu sayidan buyukse yer degistiyor
            {
                ara_deger_tutucu=sayi_2;
                sayi_2=sayi_3;
                sayi_3=ara_deger_tutucu;
            }
        }
        printf("Sayilarin kucukten buyuge siralanisi %.2f\t%.2f\t%.2f\n",sayi_1,sayi_2,sayi_3); //sayilari kucukten buyuge basiyor
        printf("Birinci sayiyi giriniz:");
        scanf("%f",&sayi_1);
    }
    printf("Programdan ciktiniz.");
    return 0;
}

