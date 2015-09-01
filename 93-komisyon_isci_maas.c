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

#define ISCI_SAYISI 5
#define KOMISYON 9
#define YUZDE 100
#define SABIT_UCRET 200

int main()
{

    int isci_satis_miktari[ISCI_SAYISI];

    int sira;
    for( sira = 0 ;sira <= ISCI_SAYISI - 1 ;sira++)         //dizinin elemanlarina satis miktari girilir
    {
        printf("%d. siradaki iscinin satis miktarini giriniz: ",sira + 1);
        scanf("%d",&isci_satis_miktari[sira]);
    }

    printf("Isci Numarasi \t\t Satis \t\t Maas\n");

    float isci_maas[ISCI_SAYISI];
    float maas;

    for( sira = 0 ;sira <= ISCI_SAYISI - 1 ;sira++)         //satis miktarinin komisyon oranindan yuzdesi hesaplanir
    {                                                       //sabit ucretle toplanip maas miktarina eklenir
        maas = ((isci_satis_miktari[sira] * KOMISYON) / (float)YUZDE) + SABIT_UCRET ;
        isci_maas[sira] = maas;

        printf("%13d %16dTL %12.3fTL\n",sira + 1,isci_satis_miktari[sira],isci_maas[sira]);
    }
    return 0;
}

