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
    int sayici,yil,kurus;
    double oran,toplam_para,ana_para;

    printf("Ana parayi giriniz:");
    scanf("%lf",&ana_para);

    printf("Kac yil faiz islenecek giriniz:");
    scanf("%d",&yil);

    printf("Hangi oranla faiz islencegini giriniz:");
    scanf("%lf",&oran);

    printf("%4s%15s%8s\n","Yil","Turk Lirasi","Kurus");

    for (sayici=1;sayici <= yil;sayici++)
    {
        toplam_para = ana_para * pow(1.0 + oran,sayici);
        toplam_para = toplam_para * 100;                //kusurati bulmak icin sayi genisletilir
        kurus       = fmod(toplam_para,100);            //paranin 0'dan sonraki kusurati bulunur
        toplam_para = toplam_para / 100;                //sayi tekrar eski haline getirilir
        printf("%4d %14.0f %7d\n",sayici,toplam_para,kurus);
    }

    return 0;
}

