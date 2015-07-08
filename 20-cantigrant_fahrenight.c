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
    int fahrenight;
    float cantigrant;

    printf("Cantigrant\tFahrenight\n");

    for(fahrenight=0;fahrenight<=300;fahrenight=fahrenight+20)
    {
        cantigrant = 5 * (fahrenight - 32)/9;
        printf("%d\t\t%.2f\n",fahrenight,cantigrant);
    }


    return 0;
}

