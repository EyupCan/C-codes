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
#include <math.h>

double hipotenus_bul(double,double);
double hipotenus_bul(double ilk_kenar,double ikinci_kenar)
{
    double dik_kenar;
    dik_kenar = sqrt((pow(ilk_kenar,2)+pow(ikinci_kenar,2)));
    return dik_kenar;
}

int main()
{
    printf("Hipotenus hesabi icin kenarlari giriniz\n");

    double kenar_bir,kenar_iki;
    printf("Ilk kenari giriniz: ");
    scanf("%lf",&kenar_bir);

    printf("Ikinci kenari giriniz: ");
    scanf("%lf",&kenar_iki);

    double hipotenus;
    hipotenus = hipotenus_bul(kenar_bir,kenar_iki);

    printf("%9s%12s%12s\n","Kenar Bir","Kenar Iki","Hipotenus");
    printf("%.2f%16.2f%12.2f",kenar_bir,kenar_iki,hipotenus);
    return 0;
}

