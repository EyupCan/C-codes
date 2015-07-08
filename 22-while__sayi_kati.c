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
    int sayi=1;

    printf("N\t10*N\t100*N\t1000*N\n\n");

    while(sayi<=10){
        printf("%d\t%d\t%d\t%d\n",sayi,sayi*10,sayi*100,sayi*1000);
        sayi++;
    }
    return 0;
}

