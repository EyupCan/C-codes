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
#include <string.h>
int main()
{
    int sira;
    printf("Kaçıncı sıradaki gezegenin adını öğrenmek istiyorsunuz?: ");
    scanf("%d",&sira);
    char *gezegen_adi;


    switch (sira)
    {
    case 1 :
        gezegen_adi = "MERKÜR";
        break;
    case 2 :
        gezegen_adi = "VENÜS";
        break;
    case 3 :
        gezegen_adi = "DÜNYA";
        break;
    case 4 :
        gezegen_adi = "MARS";
        break;
    case 5 :
        gezegen_adi = "JÜPİTER";
        break;
    case 6 :
        gezegen_adi = "SATÜRN";
        break;
    case 7 :
        gezegen_adi = "URANÜS";
        break;
    case 8 :
        gezegen_adi = "NEPTÜN";
        break;
    default:
        printf("Girdiginiz Sayı Mevcut Güneş Sisteminde Bir Gezegenle Temsil Edilmemektedir.");
        break;
    }
    if(sira<9 && sira >0)
    {
        printf("%d. Gezegenimizin adi %s ", sira,gezegen_adi);
    }
    return 0;
}

