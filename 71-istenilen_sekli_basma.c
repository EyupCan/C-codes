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

void kare(int,char);
void kare(int girilen_boyut,char girilen_desen)
{
    int satir_sayisi = 0;
    int sutun_sayisi = 0;
    while (satir_sayisi < girilen_boyut) /*x ekseninin dongusu*/
    {
        sutun_sayisi = 0;

        while (sutun_sayisi < girilen_boyut) /*y ekseninin dongusu*/
        {
            printf("%c ",girilen_desen);
            sutun_sayisi++;
        }
        printf("\n");
        satir_sayisi++;
    }


}

void ici_bos_kare(int,char);
void ici_bos_kare(int girilen_boyut,char girilen_desen)
{
    int sutun_sayisi,satir_sayisi = 1;

    while ( satir_sayisi <= girilen_boyut )
    {
        sutun_sayisi = 1;

        while (sutun_sayisi <= girilen_boyut )
        {
            if ( satir_sayisi == 1 || satir_sayisi == girilen_boyut )  //ilk veya son satirsa $ basiyoruz
            {
                printf("%c ",girilen_desen);
            }
            else
            {
                if ( sutun_sayisi == 1 || sutun_sayisi == girilen_boyut ) //ilk veya son sutunsa $ basiyoruz
                {
                    printf("%c ",girilen_desen);
                }
                else                                //geri kalan tum sutunlarda boşluk basiyoruz
                {
                    printf("  ");
                }
            }
            sutun_sayisi++;
        }
        printf("\n");
        satir_sayisi++;

    }
}

void dik_ucgen(int,char);
void dik_ucgen(int girilen_boyut,char girilen_desen)
{
    int satir_sayisi,sutun_sayisi;
    for (satir_sayisi = 1 ;satir_sayisi <= girilen_boyut ;satir_sayisi++) //Satirlari dondurur.
        {
            for (sutun_sayisi = 1 ;sutun_sayisi <= satir_sayisi ;sutun_sayisi++) //Satira basilacak yildiz sayisini dondurur
            {
                printf("%c",girilen_desen);
            }
            printf("\n");
        }
}

int main()
{
    printf("Programdan cikmak icin -1 giriniz\n");

    int sonsuz_dongu = 0;

    while(sonsuz_dongu < 1)
    {
        printf("1-Kare\n");
        printf("2-Ici Bos Kare\n");
        printf("3-Dik Ucgen\n");

        int sekil_numarasi = 0;
        int boyut = 0;
        char desen;

        printf("Cizilmesi istediginiz seklin numarasini boyutunu ve hangi karakterle cizilcegini giriniz(Ornek girdi formati:1 10 a): ");
        scanf("%d%d %c",&sekil_numarasi,&boyut,&desen);

        if(( sekil_numarasi == -1 ) || ( boyut == -1 ))
        {
            printf("Programdan basariyla ciktiniz :)");
            break;
        }

        switch(sekil_numarasi)
        {
        case 1:
            {
                kare(boyut,desen);
                break;
            }
        case 2:
            {
                ici_bos_kare(boyut,desen);
                break;
            }
        case 3:
            {
                dik_ucgen(boyut,desen);
                break;
            }
        default:
            {
                printf("Yanlis sekil numarasi girdiniz!!\n");
                break;
            }
        }

    }
    return 0;
}

