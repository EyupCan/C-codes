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
    double yuvarlanan_sayi;

    yuvarlanan_sayi = floor(girilen_sayi + .5);

    return yuvarlanan_sayi;
}

double onluk_tam_sayiya_yuvarla(double);
double onluk_tam_sayiya_yuvarla(double girilen_sayi)
{
    double onluk_yuvarlanan_sayi;

    onluk_yuvarlanan_sayi = floor((girilen_sayi * 10) + .5) / 10;

    return onluk_yuvarlanan_sayi;
}

double yuzluk_tam_sayiya_yuvarla(double);
double yuzluk_tam_sayiya_yuvarla(double girilen_sayi)
{
    double yuvarlanan_sayi;

    yuvarlanan_sayi = floor((girilen_sayi * 100) + .5) / 100;

    return yuvarlanan_sayi;
}

double binlik_tam_sayiya_yuvarla(double);
double binlik_tam_sayiya_yuvarla(double girilen_sayi)
{
    double yuvarlanan_sayi;

    yuvarlanan_sayi = floor((girilen_sayi * 1000) + .5) / 1000;

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

        double onluk_hanede_yuvarlanmis_sayi;
        onluk_hanede_yuvarlanmis_sayi = onluk_tam_sayiya_yuvarla(yuvarlanacak_sayi);

        double yuzluk_hanede_yuvarlanmis_sayi;
        yuzluk_hanede_yuvarlanmis_sayi = yuzluk_tam_sayiya_yuvarla(yuvarlanacak_sayi);

        double binlik_hanede_yuvarlanmis_sayi;
        binlik_hanede_yuvarlanmis_sayi = binlik_tam_sayiya_yuvarla(yuvarlanacak_sayi);

        printf("%12s %15s %6s %7s %7s\n","Orjinal Hali","Yuvarlanmis Hali","Onluga","Yuzluge","Binlige");
        printf("%12f %16.2f %4.4f %7.4f %7.4f\n",yuvarlanacak_sayi,yuvarlanmis_sayi,onluk_hanede_yuvarlanmis_sayi,
                                                    yuzluk_hanede_yuvarlanmis_sayi,binlik_hanede_yuvarlanmis_sayi);

    }

    printf("Program Sonlanmistir :)");

    return 0;
}

