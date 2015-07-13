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
    int sayici,toplam=0;

    for (sayici=2;sayici<=30;sayici=sayici+2)
    {
        toplam=toplam+sayici;
    }
    printf("2 den 30 a kadar olan sayilarin toplami %d dir.",toplam);
    return 0;
}

