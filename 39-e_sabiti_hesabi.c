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
    int derinlik,faktoriyel_carpani;
    long int faktoriyel;
    long double e_sabiti,bolum;

    printf("Programdan cikmak icin -1 giriniz.\n");
    printf("e sabitinin hesaplanacagi derinligi giriniz(pozitif tam sayi):");
    scanf("%d",&derinlik);

    while(derinlik != -1)
    {
        if(derinlik <= 0)                                       //derinligin - deger girilmemesi icin
        {
            printf("Pozitif bir tam sayi girmediniz.\n");
        }
        else
        {
            e_sabiti = 0;
            faktoriyel = 1;
            faktoriyel_carpani = 1;
            while(derinlik >= faktoriyel_carpani)
            {
                faktoriyel = faktoriyel * faktoriyel_carpani;   //en kucuk degerden faktoriyeli hesaplamaya basliyor
                bolum = (long double)1 / faktoriyel;            //veri kaybi olmamasi icin 1 long double cevrildi.
                e_sabiti = e_sabiti + bolum;                    //e sabitinin bolumlu kısımlari hesaplanir
                faktoriyel_carpani++;
            }
            printf("e sabitinin %d derilikteki degeri %.15Lf dir.\n",derinlik,e_sabiti+1); //formuldeki +1 eklenir.
        }
        printf("e sabitinin hesaplanmasi icin pozitif tam sayi giriniz:");
        scanf("%d",&derinlik);
    }
    printf("Programdan basariyla cikilmistir.");
    return 0;
}

