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
    int numara,satis;
    float toplam_fiyat_1=0,toplam_fiyat_2=0,toplam_fiyat_3=0,toplam_fiyat_4=0,toplam_fiyat_5=0;
    int satilan_urun_adeti_1=0,satilan_urun_adeti_2=0,satilan_urun_adeti_3=0,satilan_urun_adeti_4=0,satilan_urun_adeti_5=0;
    float toplam=0;

    printf("Programdan cikmak icin -1 giriniz\n");
    printf("Urun numarasi giriniz:");
    scanf("%d",&numara);

    while (numara !=-1 )
    {
        switch (numara)
        {
        case 1 :
            {
                printf("Kac adet satis yapildi giriniz:");
                scanf("%d",&satis);
                toplam_fiyat_1 = toplam_fiyat_1 + satis * 2.98;
                satilan_urun_adeti_1 = satilan_urun_adeti_1 + satis;
                break;
        }
        case 2 :
            {
                printf("Kac adet satis yapildi giriniz:");
                scanf("%d",&satis);
                toplam_fiyat_2 = toplam_fiyat_2 + satis * 4.50;
                satilan_urun_adeti_2 = satilan_urun_adeti_2 + satis;
                break;
            }
        case 3 :
            {
                printf("Kac adet satis yapildi giriniz:");
                scanf("%d",&satis);
                toplam_fiyat_3 = toplam_fiyat_3 + satis * 9.98;
                satilan_urun_adeti_3 = satilan_urun_adeti_3 + satis;
                break;
            }
        case 4 :
            {
                printf("Kac adet satis yapildi giriniz:");
                scanf("%d",&satis);
                toplam_fiyat_4 = toplam_fiyat_4 + satis * 4.48;
                satilan_urun_adeti_4 = satilan_urun_adeti_4 + satis;
                break;
            }
        case 5 :
            {
                printf("Kac adet satis yapildi giriniz:");
                scanf("%d",&satis);
                toplam_fiyat_5 = toplam_fiyat_5 + satis * 6.87;
                satilan_urun_adeti_5 = satilan_urun_adeti_5 + satis;
                break;
            }
        default:

            {
                printf("Yanlis urun numarasi girdiniz.\n");
                break;
            }
        }

        printf("Urun numarasi seciniz:");
        scanf("%d",&numara);
    }
    toplam = toplam_fiyat_1 + toplam_fiyat_2 + toplam_fiyat_3 + toplam_fiyat_4 + toplam_fiyat_5;

    printf("Urun Numarasi\tSatilan Miktar\tToplam Parekende Fiyat\n");
    printf("1%29d%24.2f\n",satilan_urun_adeti_1,toplam_fiyat_1);
    printf("2%29d%24.2f\n",satilan_urun_adeti_2,toplam_fiyat_2);
    printf("3%29d%24.2f\n",satilan_urun_adeti_3,toplam_fiyat_3);
    printf("4%29d%24.2f\n",satilan_urun_adeti_4,toplam_fiyat_4);
    printf("5%29d%24.2f\n",satilan_urun_adeti_5,toplam_fiyat_5);
    printf("Satisi yapilan urunlerin toplam parekende fiyati = %.2f",toplam);

    return 0;
}

