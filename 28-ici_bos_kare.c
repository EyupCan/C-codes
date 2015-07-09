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
    int sutun,satir,kenar;

    printf("Bastirmak istediginiz karenin kenar uzunlugunu giriniz:");
    scanf("%d",&kenar);

    satir = 1;

    while ( satir <= kenar )
    {
        sutun = 1;

        while (sutun <= kenar )
        {
            if ( satir == 1 || satir == kenar )  //ilk veya son satirsa $ basiyoruz
            {
                printf("$ ");
            }
            else
            {
                if ( sutun == 1 || sutun == kenar ) //ilk veya son sutunsa $ basiyoruz
                {
                    printf("$ ");
                }
                else                                //geri kalan tum sutunlarda boşluk basiyoruz
                {
                    printf("  ");
                }
            }
            sutun++;
        }
        printf("\n");
        satir++;
    }
    return 0;
}

