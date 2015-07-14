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
    int sayici;

    printf("Ikılık sistemde sayilar\n");

    for (sayici = 48;sayici <= 49;sayici++ )    //sayilarin ascii tablodaki degerleri basilir
    {

        printf("%c\n",sayici);
    }

    printf("Sekizlik sistemde sayilar\n");

    for (sayici = 48;sayici <= 55;sayici++)     //sayilarin ascii tablodaki degerleri basilir
    {

        printf("%c\n",sayici);
    }

    printf("Onluk sistemde sayilar\n");

    for (sayici = 48;sayici <= 57;sayici++)     //sayilarin ascii tablodaki degerleri basilir
    {
        printf("%c\n",sayici);
    }

    printf("Onaltilik sistemde sayilar\n");

    for (sayici = 48;sayici <= 70;sayici++)     //sayilarin ascii tablodaki degerleri basilir
    {
        if ((sayici >= 48 && sayici <=57) || sayici>= 65) //aradaki sayilarin basilmamasi icin kosul konmustur
        {
            printf("%c\n",sayici);
        }
    }

    return 0;
}

