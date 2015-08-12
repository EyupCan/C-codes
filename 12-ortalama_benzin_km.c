/********************************************
*                                           *
*           Eyüp Can KILINÇDEMİR            *
*      KARADENİZ TEKNİK UNİVERSİTESİ        *
*          ceksoft.wordpress.com            *
*       eyupcankilincdemir@gmail.com        *
*                                           *
********************************************/

#include<stdio.h>

int main()
{
    int km,toplam_km;
    float litre,toplam_litre,ort,genel_ort;

    printf("Cıkmak icin kilometreyi -1 giriniz\n");

    toplam_km = 0;
    toplam_litre = 0;

    printf("Kac kilometre yol alindi giriniz:");
    scanf("%d",&km);

    while(km != -1 )
    {

        printf("Kac litre benzin harcandi giriniz:");
        scanf("%f",&litre);

        ort = (float)km / litre;
        toplam_km = toplam_km + km;
        toplam_litre = toplam_litre + litre;

        printf("Ortalama kilometre/litre=%.2f\n",ort);

        printf("Kac kilometre yol alindi giriniz:");
        scanf("%d",&km);

    }

    if (km == -1 && litre == 0)
    {
        printf("Program sonlandirlilmistir");
    }

    if (km == -1 && litre != 0)
    {
    genel_ort = toplam_km / toplam_litre;
    printf("Toplam ortalama Kilometre/litre=%.2f",genel_ort);
    }

    return 0;
}
