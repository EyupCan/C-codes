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

#define SAAT 24         //limit saat
#define DAKIKA 60       //limit dakika
#define SANIYE 60       //limit saniye

int saat_farki(int,int,int);
int saat_farki(int saat,int dakika,int saniye)
{
    int toplam_saniye = 0;

    toplam_saniye = saat * DAKIKA * SANIYE;             //saati saniyeye cevirdik
    toplam_saniye = toplam_saniye + (dakika * SANIYE);  //dakikayi saniye ye cevirdik ve saatten gelenle topladik
    toplam_saniye = toplam_saniye + saniye;             //tum saniyeleri girilen saniye ile topladik

    return toplam_saniye;
}

int main()
{
    printf("Programdan cikmak icin -1 giriniz.\n");

    int sonsuz_dongu = 0;

    while(sonsuz_dongu < 1)
    {

        int saat;
        printf("Saati giriniz: ");
        scanf("%d",&saat);

        if(saat == -1)
        {
            printf("Programdan cikilmistir :)");
            break;
        }

        int dakika;
        printf("Dakikayi giriniz: ");
        scanf("%d",&dakika);

        if(dakika == -1)
        {
            printf("Programdan cikilmistir :)");
            break;
        }

        int saniye;
        printf("Saniyeyi giriniz: ");
        scanf("%d",&saniye);

        if(saniye == -1)
        {
            printf("Programdan cikilmistir :)");
            break;
        }

        if(( saat > SAAT ) || ( dakika > DAKIKA ) || ( saniye > SANIYE ))       //saat dakika ve saniyenin limitlerinden
        {                                                                       //fazla girilmesini engellemek icin kontrol
            printf("Saat,dakika veya saniyeden birini yanlis girdiniz!!\n");    // yapisi
        }
        else if(( saat < -1 ) || ( dakika < -1 ) || ( saniye < -1 ))            //saat dakika ve saniyenin negatif girilmemesi
        {                                                                       //icin kontrol yapisi
            printf("Saat,dakika veya saniyeden birini yanlis girdiniz!!\n");
        }
        else
        {
            saat = saat % 12;               //12 lik saat sistemine gore saatin duzenlenmesi

            int gecen_saniye;
            gecen_saniye = saat_farki(saat,dakika,saniye);

            printf("Saat 12 den bu yana %d kadar saniye gecmistir.\n",gecen_saniye);
        }
    }
    return 0;
}

