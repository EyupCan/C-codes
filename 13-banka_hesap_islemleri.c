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
    int hesap_numarasi;
    float yeni_bakiye,ilk_bakiye,musterinin_harcamasi,
    aktarilan_kredi,kredi_limiti,bakiye=0;

    printf("Cikis icin -1 giriniz.\n");

    printf("Hesap numarasini girin:");
    scanf("%d",&hesap_numarasi);

    while (hesap_numarasi!=-1)
    {

        printf("Ilk bakiyeyi giriniz:");
        scanf("%f",&ilk_bakiye);

        printf("Toplam harcamalari giriniz:");
        scanf("%f",&musterinin_harcamasi);

        printf("Toplam kredileri girin:");
        scanf("%f",&aktarilan_kredi);

        printf("Kredi limitini giriniz:");
        scanf("%f",&kredi_limiti);

        yeni_bakiye =  musterinin_harcamasi + ilk_bakiye - aktarilan_kredi;

        if (yeni_bakiye > kredi_limiti)
        {
            bakiye = ilk_bakiye + aktarilan_kredi;
            printf("Hesap numarasi:%d\n",hesap_numarasi);
            printf("Kredi limiti:%.2f\n",kredi_limiti);
            printf("Bakiye:%.2f\n",bakiye);
            printf("Kredi limiti asildi.\n");


        }
        printf("Hesap numarasini girin:");
        scanf("%d",&hesap_numarasi);

    }
    if (hesap_numarasi == -1)
    {
        printf("Program sonlandirilmistir.");
    }
    return 0;
}

