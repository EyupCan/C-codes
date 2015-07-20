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
    int onluk_tabanda_sayi = 0;

    printf("Programdan cikmak icin -1 giriniz.\n");

    while(onluk_tabanda_sayi != -1)
    {
        printf("1-100 arasi bir sayi giriniz: ");
        scanf("%d",&onluk_tabanda_sayi);

        if(onluk_tabanda_sayi == -1) //program basinda -1 girilmismi kontrol edilir
        {
            break;
        }

        if(onluk_tabanda_sayi <= 100 && onluk_tabanda_sayi > 0) //sayi belirlenen araliktami kontrol edilir.
        {
            int hesaplanan_deger;
            hesaplanan_deger = onluk_tabanda_sayi;

            printf("Onluk Tabandaki Sayi %7sRoma Rakami Karsiligi\n");
            printf("%d%-28s",onluk_tabanda_sayi); //sola dayali yazmak icin - kullanilir

            while(hesaplanan_deger != 0) //sayi degeri sifir olana kadar dongunun donmesi saglanir
            {
                if(hesaplanan_deger >= 100)
                {
                    printf("C");
                    hesaplanan_deger = hesaplanan_deger - 100;
                }
                else if(hesaplanan_deger >= 90)
                {
                    printf("XC");
                    hesaplanan_deger = hesaplanan_deger - 90;
                }
                else if(hesaplanan_deger >= 50)
                {
                    printf("L");
                    hesaplanan_deger = hesaplanan_deger - 50;
                }
                else if(hesaplanan_deger >= 40)
                {
                    printf("XL");
                    hesaplanan_deger = hesaplanan_deger - 40;
                }
                else if(hesaplanan_deger >= 10)
                {
                    printf("X");
                    hesaplanan_deger = hesaplanan_deger - 10;
                }
                else if(hesaplanan_deger == 9)
                {
                    printf("IV");
                    hesaplanan_deger = hesaplanan_deger - 9;
                }
                else if(hesaplanan_deger >= 5)
                {
                    printf("V");
                    hesaplanan_deger = hesaplanan_deger - 5;
                }
                else if(hesaplanan_deger == 4)
                {
                    printf("IV");
                    hesaplanan_deger = hesaplanan_deger - 4;
                }
                else if(hesaplanan_deger >= 1)
                {
                    printf("I");
                    hesaplanan_deger = hesaplanan_deger - 1;
                }
            }
        }
        else
        {
            printf("1 ile 100 arasinda bir sayi girmediniz!!");
        }

        printf("\n");

    }

    printf("Programdan ciktiniz :)");

    return 0;
}

