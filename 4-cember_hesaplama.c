/********************************************
*                                           *
*           Eyüp Can KILINÇDEMİR            *
*      KARADENİZ TEKNİK UNİVERSİTESİ        *
*          ceksoft.wordpress.com            *
*       eyupcankilincdemir@gmail.com        *
*                                           *
********************************************/

#include<stdio.h>

int main()
{
    float r,cap,cevre,alan,pi;
    pi = 3.14159;

    printf("Capi,cevreyi,alani hesaplamak icin yari capi giriniz: ");
    scanf("%f",&r);

    cap = r * 2;
    cevre = 2*pi*r;
    alan = pi*r*r;

    printf("Cemberin capi:%.3f\nCemberin cevresi:%.3f\nCemberin alani:%.3f",cap,cevre,alan);

    return 0;
}

