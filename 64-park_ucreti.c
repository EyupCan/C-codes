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


double ucret_hesapla(double);
double ucret_hesapla(double saat)
{
    int minumum_ucret_saati = 3;

    double minumum_ucret = 2;
    double maksimum_ucret = 10;
    double saatlik_gecikme_ucreti = 0.5;
    double ucret;

    if(saat <= minumum_ucret_saati)
    {
        return minumum_ucret;
    }
    else if(saat >= 20)
    {
        return maksimum_ucret;
    }
    else
    {
        ucret = minumum_ucret + ((saat - minumum_ucret_saati) * saatlik_gecikme_ucreti);
        return ucret;
    }
}

int main()
{
    double birinci_araba_ucret,ikinci_araba_ucret,ucuncu_araba_ucret;
    double birinci_araba_saat,ikinci_araba_saat,ucuncu_araba_saat;

    printf("Birinci arabanin park saatini giriniz: ");
    scanf("%lf",&birinci_araba_saat);
    birinci_araba_ucret = ucret_hesapla(birinci_araba_saat);

    printf("Ikinci arabanin park saatini giriniz: ");
    scanf("%lf",&ikinci_araba_saat);
    ikinci_araba_ucret = ucret_hesapla(ikinci_araba_saat);

    printf("Ucuncu arabanin park saatini giriniz: ");
    scanf("%lf",&ucuncu_araba_saat);
    ucuncu_araba_ucret = ucret_hesapla(ucuncu_araba_saat);

    printf("%5s%10s%10s","Araba","Saat","Ucret\n");
    printf("1 %13.1f %8.2f\n",birinci_araba_saat,birinci_araba_ucret);
    printf("2 %13.1f %8.2f\n",ikinci_araba_saat,ikinci_araba_ucret);
    printf("3 %13.1f %8.2f\n",ucuncu_araba_saat,ucuncu_araba_ucret);

    int toplam_saat;
    double toplam_ucret;

    toplam_saat = birinci_araba_saat + ikinci_araba_saat + ucuncu_araba_saat;
    toplam_ucret = birinci_araba_ucret + ikinci_araba_ucret + ucuncu_araba_ucret;
    printf("Toplam %8d %8.2f",toplam_saat,toplam_ucret);

    return 0;
}

