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
#include <math.h>

double tam_sayiya_yuvarla(double);
double tam_sayiya_yuvarla(double girilen_sayi)
{
    int yuvarlanan_sayi;

    yuvarlanan_sayi = floor(girilen_sayi + .5);

    return yuvarlanan_sayi;
}

int main()
{
    double sayi_limiti;
    printf("Kac sayinin yuvarlanmasini istiyosunuz giriniz: ");
    scanf("%lf",&sayi_limiti);

    int for_sayici;
    for(for_sayici = 1 ;for_sayici <= sayi_limiti ;for_sayici++)
    {
        double yuvarlanacak_sayi;

        printf("Yuvarlanacak sayiyi giriniz: ");
        scanf("%lf",&yuvarlanacak_sayi);

        double yuvarlanmis_sayi;
        yuvarlanmis_sayi = tam_sayiya_yuvarla(yuvarlanacak_sayi);

        printf("%12s %15s\n","Orjinal Hali","Yuvarlanmis Hali");
        printf("%12.2f %16.2f\n",yuvarlanacak_sayi,yuvarlanmis_sayi);
    }

    printf("Program sonlanmistir :)");

    return 0;
}

