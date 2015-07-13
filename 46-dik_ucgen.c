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

    int boyut,satir,sutun;

    printf("Seklin boyutunu belirleyiniz:");
    scanf("%d",&boyut);                         //Sekillerin  boyutu belirlenir

    printf("90 derecenin sol ust kosede oldugu ucgen\n\n");

    for (satir=1;satir<=boyut;satir++)              //Satirlari dondurur
    {
        for(sutun = 0;sutun <= boyut-satir;sutun++) //Sutunlari satir sayisina gore göre doldurur
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n90 derecenin sol alt kosede oldugu ucgen\n\n");

    for (satir = 1;satir <= boyut;satir++) //Satirlari dondurur.
    {
        for (sutun = 1;sutun <= satir;sutun++) //Satira basilacak yildiz sayisini dondurur
        {
            printf("*");
        }
        printf("\n");
    }

    int bosluk_sayisi,ara_boyut_tutucu;
    ara_boyut_tutucu = boyut;

    printf("\n90 derecenin sag ust kosede oldugu ucgen\n\n");

    for (satir = boyut;satir >= 0;satir--) //Satir sayisi dondurulur
    {
        for (bosluk_sayisi = boyut;bosluk_sayisi-satir>0;bosluk_sayisi--) //Satira basilcak bosluk sayisi dondurulur
        {
            printf(" ");
        }
        for (sutun = 1;sutun <= ara_boyut_tutucu;sutun++) //Satira basilcak yildiz sayisi dondurulur
        {
            printf("*");
        }
        printf("\n");
        ara_boyut_tutucu--;                               //Her tur bir adet az yildiz dongusu doner.
    }

    printf("90 derecenin sag alt kosede oldugu ucgen\n\n");

    for (satir = 1;satir <= boyut;satir++)
    {
        for (bosluk_sayisi = 1;bosluk_sayisi <= boyut - satir;bosluk_sayisi++) //Satira basilcak bosluk sayisi dondurulur
        {
            printf(" ");
        }
        for (sutun = 1;sutun <= satir;sutun++)                                 //Satira basilcak yildiz sayisi dondurulur
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

