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
    float yari_cap,cap,cevre,alan;
    float pi=3.14159;

    printf("Programdan cikmak icin -1 giriniz.\n");

    printf("Cemberin yari capini giriniz:");
    scanf("%f",&yari_cap);

    while (yari_cap != -1)
    {
        cap   = 2*yari_cap;
        cevre = 2*pi*yari_cap;
        alan  = pi*yari_cap*yari_cap;

        printf("Cemberin capi=%.2f\tCevresi=%.2f\tAlan=%.2f\n",cap,cevre,alan);

        printf("Cemberin yari capini giriniz:");
        scanf("%f",&yari_cap);
    }
    printf("Programdan ciktiniz.");
    return 0;
}

