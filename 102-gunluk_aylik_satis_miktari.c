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

#define URUN_ADETI 5
#define TEMSILCI_SAYISI 4
#define DOLAR 3
#define AY_SONU 30

void gunluk_fis(const int [][URUN_ADETI],const int );       //gun icindeki satılan urun, gelir ve satıcıyı basar
void gunluk_fis(const int gunluk_fis[][URUN_ADETI], const int eleman_numarasi)
{
    int sutun;
    for(sutun = 0; sutun <= URUN_ADETI - 1; sutun++)
    {
        if(gunluk_fis[eleman_numarasi -1][sutun] > 0)
        {
            printf("%d. numaralı eleman\n%d. ürünü\n%d adet satmistir.\nToplam Gelir: %d$'dır.\n",eleman_numarasi,sutun + 1, gunluk_fis[eleman_numarasi - 1][sutun],gunluk_fis[eleman_numarasi - 1][sutun] * DOLAR);
        }
    }
}

void satis_kayit(int [][URUN_ADETI]);
void satis_kayit(int gunluk_kayit_dizisi[][URUN_ADETI])
{
    char satisdan_cikis = 'e';
    while(satisdan_cikis != 'h')
    {
        int eleman_numarasi;
        printf("Eleman numarasini giriniz: ");
        scanf("%d",&eleman_numarasi);

        if(eleman_numarasi > 0 && eleman_numarasi <= TEMSILCI_SAYISI) //eleman numarasını kontrol eder
        {
            char secili_eleman_cikisi = 'e';
            while(secili_eleman_cikisi != 'h') //elemanın satıs islemi bitirene kadar dongude kalir
            {
                int urun_numarasi;
                printf("Urun numarasını giriniz: ");
                scanf("%d",&urun_numarasi);

                if(urun_numarasi > 0 && urun_numarasi <= URUN_ADETI) //urun numarasını kontrol eder
                {
                    int satis_sayisi;
                    printf("Satis sayisini giriniz: ");
                    scanf("%d",&satis_sayisi);

                    if(satis_sayisi >= 0)
                    {
                        gunluk_kayit_dizisi[eleman_numarasi-1][urun_numarasi-1] = gunluk_kayit_dizisi[eleman_numarasi-1][urun_numarasi-1] + satis_sayisi;
                    }
                    else
                    {
                        printf("Satis sayisini negatif girdiniz!!");
                    }
                }
                else
                {
                    printf("Urun numarasini yanlis girdiniz!!\n");
                }
                printf("Baska ürün satisi yaptiniz mi?(e veya h): ");
                scanf(" %c",&secili_eleman_cikisi);

            }
            gunluk_fis(gunluk_kayit_dizisi,eleman_numarasi);
        }
        else
        {
            printf("Eleman numarasini yanlis girdiniz!!\n");
        }
        printf("Isleme devam etmek istiyormusunuz?(e veya h): ");
        scanf(" %c",&satisdan_cikis);
    }
}

void aylik_satis_kayit(int [][URUN_ADETI + 2],int [][URUN_ADETI]);
void aylik_satis_kayit(int aylik_satis_kayit_dizisi[][URUN_ADETI + 2],int gunluk_kayit_dizisi[][URUN_ADETI])
{
    int eleman_sayici,urun_sayici;
    for(eleman_sayici = 0; eleman_sayici < TEMSILCI_SAYISI + 1; eleman_sayici++) //temsilcileri döndürür
    {

        for(urun_sayici = 0; urun_sayici < URUN_ADETI + 1; urun_sayici++) //bir onceki gunun kaydıyla bugunun kaydını birlestirip kaydeder
        {
            aylik_satis_kayit_dizisi[eleman_sayici + 1][urun_sayici + 1] = aylik_satis_kayit_dizisi[eleman_sayici + 1][urun_sayici + 1] + gunluk_kayit_dizisi[eleman_sayici][urun_sayici];
        }
    }


}
void dizi_sifirla(int [][URUN_ADETI]);  //gunluk satis dizisinin elemanlarını sifira atar.
void dizi_sifirla(int sifirlanacak_gunluk_dizi[][URUN_ADETI]) 
{

    int satir;
    for(satir = 0; satir <= TEMSILCI_SAYISI - 1; satir++)
    {
        int sutun;
        for(sutun = 0; sutun <= URUN_ADETI - 1; sutun++)
        {
            sifirlanacak_gunluk_dizi[satir][sutun] = 0;
        }
    }
}

void aylik_satis_dizi_bas(int [][URUN_ADETI + 2]);    //aylık satis dizisini ekrana basar
void aylik_satis_dizi_bas(int aylik_fis[][URUN_ADETI + 2])
{
    int satir,sutun;
    for(satir = 0; satir <= TEMSILCI_SAYISI + 1; satir++)
    {
        int satir_toplam = 0;
        for(sutun = 0; sutun <= URUN_ADETI + 1; sutun++)
        {
            if(satir == 0 && sutun == 0)
            {
                printf("Eleman Numarası\\Ürün Numarası\t");
            }
            else if(satir == 0 && (sutun < URUN_ADETI + 1) )
            {
                printf("%d. Ürün\t",sutun);
            }
            else if( (satir < TEMSILCI_SAYISI + 1) && sutun == 0)
            {
                printf("%d. Eleman\t\t\t",satir);
            }
            else if( (satir == TEMSILCI_SAYISI + 1 && sutun == 0) || (satir == 0 && sutun == URUN_ADETI + 1) )
            {
                printf("Toplam\t\t\t\t");
            }
            else if ( (satir > 0 && sutun > 0) && (satir != TEMSILCI_SAYISI + 1  && (sutun != URUN_ADETI + 1) ) ) //satir ve ve sutunun sonunda toplama işlemi yapar
            {
                satir_toplam = satir_toplam + aylik_fis[satir][sutun];
                aylik_fis[TEMSILCI_SAYISI + 1][sutun] = aylik_fis[TEMSILCI_SAYISI + 1][sutun] + aylik_fis[satir][sutun];
                printf("%d\t",aylik_fis[satir][sutun]);
            }
            else if ( satir != TEMSILCI_SAYISI + 1)
            {
                aylik_fis[satir][sutun] = satir_toplam;
                printf("%d\t",aylik_fis[satir][sutun]);
            }
            else
            {
                printf("%d\t",aylik_fis[satir][sutun]);
            }
        }
        printf("\n");
    }
}



int main()
{

    int gunluk_satis_dizisi [TEMSILCI_SAYISI][URUN_ADETI] = { 0 };
    int aylik_satis_dizisi[TEMSILCI_SAYISI + 2][URUN_ADETI + 2] = { 0 };
    printf("****Satiş özet programina Hoşgeldiniz****\n");

    int ayin_gunu;
    for(ayin_gunu = 1; ayin_gunu <= AY_SONU; ayin_gunu++)
    {

        printf("Bugun ayın %d. günü\n",ayin_gunu);

        satis_kayit(gunluk_satis_dizisi);
        aylik_satis_kayit(aylik_satis_dizisi,gunluk_satis_dizisi);

        dizi_sifirla(gunluk_satis_dizisi);

    }

    aylik_satis_dizi_bas(aylik_satis_dizisi);

    return 0;
}

