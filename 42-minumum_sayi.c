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
    int minumum,sayici,sayi_limiti,sayi;

    printf("Girdiginiz sayi hem karsilastirilir\nhemde kendinden sonra kac sayi girilcegini belirler.\n");
    printf("Sayi giriniz:");
    scanf("%d",&minumum);

    if (minumum>=1)
    {
        sayi_limiti = minumum;

        for (sayici = 1;sayici <= sayi_limiti;sayici++)
        {
            printf("Sayi giriniz:");
            scanf("%d",&sayi);

            if (sayi <= minumum)
            {
                minumum = sayi;
            }
        }
        printf("%d minumum sayidir.",minumum);
    }
    else
    {
        printf("Ilk sayi olarak sifir veya Negatif bir sayi girdiniz.");
    }
    return 0;
}

