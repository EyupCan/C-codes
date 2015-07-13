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

int main()
{
    int yil,sayici;
    double toplam_para,anapara,oran;

    printf("Ana parayi giriniz:");
    scanf("%lf",&anapara);

    printf("Faiz yatacak yili giriniz:");
    scanf("%d",&yil);

    for (oran = .05;oran <= .1;oran = oran + .01)       //farkli oranlarda hesaplama yapmak icin
       {
           printf("%4s%21s%15s\n","Yil","Depozito Miktari","Faiz orani");

           for (sayici = 1;sayici <= yil;sayici++)      //yillar icinde paranin degisimi icin
           {
               toplam_para = anapara * pow(1.0 + oran,sayici);
               printf("%3d%21.2f%15.2f\n",sayici,toplam_para,oran); 
           }
           printf("\n");
       }
    return 0;
}

