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
    int sayi_limiti,sayi,toplam=0,sayici;

    printf("Kac sayinin toplanacagini belirtiniz:");
    scanf("%d",&sayi_limiti);

    for (sayici=1;sayici<=sayi_limiti;sayici++)
    {
        printf("%d. sayiyi giriniz:",sayici);
        scanf("%d",&sayi);

        toplam = toplam + sayi;

    }

    printf("Girilen sayilarin toplami %d dir.",toplam);

    return 0;

}

