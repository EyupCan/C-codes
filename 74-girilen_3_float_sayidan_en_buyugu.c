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

float en_buyuk_float(float,float,float);
float en_buyuk_float(float birinci,float ikinci,float ucuncu)
{
    float max_float;

    max_float = birinci;

    if(max_float < ikinci)
    {
        max_float = ikinci;
    }
    if(max_float < ucuncu)
    {
        max_float = ucuncu;
    }
    return max_float;
}

int main()
{
    float birinci_sayi;
    printf("Birinci float sayiyi giriniz: ");
    scanf("%f",&birinci_sayi);

    float ikinci_sayi;
    printf("Ikinci float sayiyi giriniz: ");
    scanf("%f",&ikinci_sayi);

    float ucuncu_sayi;
    printf("Ucuncu float sayiyi giriniz: ");
    scanf("%f",&ucuncu_sayi);

    float max_float_sayi;
    max_float_sayi = en_buyuk_float(birinci_sayi,ikinci_sayi,ucuncu_sayi);

    printf("En buyuk Float sayiniz = %f",max_float_sayi);

    return 0;
}

