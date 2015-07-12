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
    int sayi,sayici = 0,toplam = 0;
    float ortalama = 0;

    printf("9999 girdiginizde ortalma alinir program sonlanir.\n");

    for (sayici = 0;sayi != 9999;)
    {
        printf("Sayi giriniz:");
        scanf("%d",&sayi);

        if (sayi != 9999)
        {
            toplam = toplam + sayi;
            sayici++;
        }
    }

    ortalama = (float)toplam / sayici;

    printf("Girilen sayilarin toplami = %d\n",toplam);
    printf("Girilen sayilarin adeti = %d\n",sayici);
    printf("Girilen sayilarin ortalamasi=%.2f",ortalama);

    return 0;
}

