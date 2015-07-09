/********************************************
*                                           *
*           Eyüp Can KILINÇDEMİR            *
*      KARADENİZ TEKNİK UNİVERSİTESİ        *
*          ceksoft.wordpress.com            *
*       eyupcankilincdemir@gmail.com        *
*                                           *
********************************************/

#include <stdio.h>

int main()

{
    int sayici,birinci_buyuk,ikinci_buyuk,ara_deger_tutucu,sayi;

    printf("1. sayiyi giriniz:");
    scanf("%d",&birinci_buyuk);

    printf("2. sayiyi giriniz:");
    scanf("%d",&ikinci_buyuk);

    if (birinci_buyuk < ikinci_buyuk)
    {
        ara_deger_tutucu = birinci_buyuk;
        birinci_buyuk = ikinci_buyuk;
        ikinci_buyuk = ara_deger_tutucu;
    }

    sayici = 3;

    while (sayici<=10)
    {
        printf("%d. sayiyi giriniz:",sayici);
        scanf("%d",&sayi);

        if ( sayi < birinci_buyuk && sayi < ikinci_buyuk )
        {
            birinci_buyuk = birinci_buyuk;
            ikinci_buyuk  = ikinci_buyuk;
        }

        if ( sayi > birinci_buyuk && sayi > ikinci_buyuk )
        {
            ikinci_buyuk  = birinci_buyuk;
            birinci_buyuk = sayi;
        }

        if ( sayi < birinci_buyuk && sayi > ikinci_buyuk )
        {
            birinci_buyuk = birinci_buyuk;
            ikinci_buyuk  = sayi;
        }
        sayici++;
    }

    printf("%d en buyuk sayidir.\n%d ikinci en buyuk sayidir.",birinci_buyuk,ikinci_buyuk);

    return 0;

}

