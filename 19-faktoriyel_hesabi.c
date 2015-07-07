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
    int sayi,faktoriyel=1,sayici=1;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    printf("n\tn!\n");

    while (sayici<=sayi)
    {
        faktoriyel = faktoriyel * sayici;


        printf("%d\t%d\n",sayici,faktoriyel);
        sayici++;

    }
    return 0;
}

