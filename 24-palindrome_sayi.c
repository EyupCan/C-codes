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
    int birler,onlar,binler,on_binler,sayi;

    printf("Programdan cikmak icin -1 giriniz\n");
    printf("Bes basamakli bir sayi giriniz:");
    scanf("%d",&sayi);

    while (sayi != -1) //Palindrome sayi tersten ve duzden okunuslari ayni olan sayilardir.
    {
        on_binler = sayi   / 10000; //sayinin ilk rakami atanir

        binler   = sayi   / 1000;   // bolum yapilarak iki basamaga indirilir
        binler   = binler % 10;     // mod aliarak ikinci rakami atanir

        onlar    = sayi   / 10;     // bolum yapilarak iki basamaga indirilir
        onlar    = onlar  % 10;     // mod alinarak dorduncu rakami atanir.

        birler   = sayi   % 10;     // modla direk besinci rakam atanir.

        if (on_binler == birler && binler == onlar)
        {
            printf("Bu sayi palindrome sayidir.\n");

        }
        else
        {
            printf("Bu sayi palindrome sayi degildir.\n");
        }

        printf("Bes basamakli bir sayi giriniz:");
        scanf("%d",&sayi);
    }
    printf("Programdan ciktiniz.");

    return 0;
}

