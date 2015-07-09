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
    int sayici=1,sayi=1;

    while (sayici <= 100)
    {
        sayi = sayi % 10;

        if (sayi == 0) //sayi 10un katiysa bir alt satira gecis
        {
            printf("\n");
        }
        else
        {
            printf("$");
        }
        sayici++;
        sayi++;
    }
    return 0;
}

