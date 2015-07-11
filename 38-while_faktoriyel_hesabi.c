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
    int sayi,ara_deger;
    long int faktoriyel;

    printf("Programdan cikmak icin -1 giriniz.\n");

    printf("Faktoriyeli hesaplanacak pozitif tam sayiyi giriniz:");
    scanf("%d",&sayi);

    while(sayi != -1)
    {

        if(sayi < 0)
        {
            printf("Girdiginiz sayi pozitif bir tam sayi degildir.\n");
        }
        else if (sayi == 0)
        {
            printf("0 sayisinin faktoriyeli 1 dir.\n");
        }
        else
        {
            ara_deger = sayi;
            faktoriyel = 1;
            while (ara_deger > 1)
            {
                faktoriyel = faktoriyel * ara_deger;
                ara_deger--;
            }
            printf("Girdiginiz %d sayisinin faktoriyeli %ld dir.\n",sayi,faktoriyel);
        }



        printf("Faktoriyeli hesaplanacak pozitif tam sayiyi giriniz:");
        scanf("%d",&sayi);
    }
    return 0;
}

