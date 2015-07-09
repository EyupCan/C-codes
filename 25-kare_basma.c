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
    int sutun_sayisi,satir_sayisi=0,kenar;

    printf("Bastirmak istediginiz karenin bir kenarini giriniz:");
    scanf("%d",&kenar);

    while (satir_sayisi < kenar) /*x ekseninin dongusu*/
    {
        sutun_sayisi = 0;

        while (sutun_sayisi < kenar) /*y ekseninin dongusu*/
        {
            printf("$ ");
            sutun_sayisi++;
        }
        printf("\n");
        satir_sayisi++;
    }
    return 0;
}

