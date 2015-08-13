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
#include <time.h>
#include <math.h>

#define MAX_SORU_SAYISI 10

int soru_sor(int,int);
int soru_sor(int seviye,int soru_tipi)
{
    int birinci_sayi,ikinci_sayi,islem_sonucu = 0;

    birinci_sayi = rand() % (int)pow(10,seviye);               //Secilen seviyeye gore 1 veya 2 basamakli sayilar elde edilir
    ikinci_sayi  = rand() % (int)pow(10,seviye);

    switch(soru_tipi)
    {
    case 1:                     //toplama islemi yapilir
        {
            printf("%d arti %d kactir?\n",birinci_sayi,ikinci_sayi);
            islem_sonucu = birinci_sayi + ikinci_sayi;
            break;
        }
    case 2:                     //cikarma islemi yapilir
        {
            printf("%d eksi %d kactir?\n",birinci_sayi,ikinci_sayi);
            islem_sonucu = birinci_sayi - ikinci_sayi;
            break;
        }
    case 3:                     //carpma islemi yapilir
        {
            printf("%d kere %d kactir?\n",birinci_sayi,ikinci_sayi);
            islem_sonucu = birinci_sayi * ikinci_sayi;
            break;
        }
    case 4:                     //bolme islemi yapilir
        {
            printf("%d bolu %d kactir?\n",birinci_sayi,ikinci_sayi);
            islem_sonucu = birinci_sayi / ikinci_sayi;
            break;
        }
    case 5:                     //fonksiyon kendini tekrar cagirilir ve random bir soru tipi atanir
        {
            soru_tipi = (rand() % 4) + 1;
            islem_sonucu = soru_sor(seviye,soru_tipi);
            break;
        }
    }

    return islem_sonucu;
}

void cevap_karsiliklari(int);
void cevap_karsiliklari(int dogruluk_kontrolu)
{
    int verilecek_cevap_karsiligi;

    if(dogruluk_kontrolu == 1)                  //cevap dogruysa 0-1-2-3-4 sayilari uretilir
    {
        verilecek_cevap_karsiligi = rand() % 5;
    }
    else                                        //cevap yanlissa 5-6-7-8-9 sayilari uretilir
    {
        verilecek_cevap_karsiligi = (rand() % 5) + 5;
    }

    switch(verilecek_cevap_karsiligi)
    {
    case 0:
        {
            printf("Cok iyi bildin :):) \n");
            break;
        }
    case 1:
        {
            printf("Mukemmelsin :) \n");
            break;
        }
    case 2:
        {
            printf("Aferin :) \n");
            break;
        }
    case 3:
        {
            printf("Boyle devam et dogru bildin :) \n");
            break;
        }
    case 4:
        {
            printf("Harikasin :) \n");
            break;
        }
    case 5:
        {
            printf("Hayir. Lutfen tekrar dene :/ \n");
            break;
        }
    case 6:
        {
            printf("Yanlis. Lutfen bir daha dene :( \n");
            break;
        }
    case 7:
        {
            printf("Pes etme yapabilirsin :) \n");
            break;
        }
    case 8:
        {
            printf("Hayir. Denemeye devam et \n");
            break;
        }
    case 9:
        {
            printf("Uzulme yapabilirsin :) \n");
            break;
        }

    }
}

int main()
{
    srand(time(NULL));                      //time fonksiyonu ile rand fonksiyonunun rasgeleligi saglanir.

    char devam_edilme_durumu = 'e';
    while(devam_edilme_durumu != 'h')
    {
        printf("1-Bir basamakli sorular\n");
        printf("2-Iki basamkli sorular\n");

        int soru_seviyesi;
        printf("Sorularin seviye numarasini giriniz: ");
        scanf("%d",&soru_seviyesi);


        printf("1-Toplama işlemleri\n");
        printf("2-Cıkarma islemleri\n");
        printf("3-Carpma islemleri\n");
        printf("4-Bolme islemleri\n");
        printf("5-Karma islemler\n");

        int soru_tipi;
        printf("Soru tipi numarasini giriniz: ");
        scanf("%d",&soru_tipi);

        if( ( ( soru_seviyesi == 1 ) || ( soru_seviyesi == 2 ) ) && ( ( soru_tipi <= 5 ) && ( soru_tipi >= 1) ) ) //soru tipi veya soru seviyesinin dogrulugunu kontrol edilir
        {

            int sonsuz_dongu = 0;
            int dogru_cevap_sayisi = 0;
            int yanlis_cevap_sayisi = 0;

            while(sonsuz_dongu < 1)
            {

                int soru_sonucu;
                soru_sonucu = soru_sor(soru_seviyesi,soru_tipi);

                int girilen_cevap;
                printf("Sonuc = ");
                scanf("%d",&girilen_cevap);

                int cevap_kontrolu;
                if(girilen_cevap == soru_sonucu)      //Cevap dogruysa cevap kontrolu 1 yapilir fonksiyon cagrilir
                {
                    cevap_kontrolu = 1;
                    cevap_karsiliklari(cevap_kontrolu);
                    dogru_cevap_sayisi++;
                }
                else                                    //Cevap yanlissa cevap kontrolu 0 yapilir fonksiyon cagrilir
                {
                    cevap_kontrolu = 0;
                    cevap_karsiliklari(cevap_kontrolu);
                    yanlis_cevap_sayisi++;
                }

                if((dogru_cevap_sayisi + yanlis_cevap_sayisi) == MAX_SORU_SAYISI)   //dogru ve yanlis cevap sayisi toplami max soruya esitse soru sorma dongusunden cikilir
                {

                    printf("%d sorudan %d dogru cevabiniz %d yanlis cevabiniz var :) \n",MAX_SORU_SAYISI,dogru_cevap_sayisi,yanlis_cevap_sayisi);

                    if(yanlis_cevap_sayisi >= (MAX_SORU_SAYISI * 3) / 10 )          //cevaplarin %30 ve daha fazla si yanlis ise
                    {                                                               //carpma calisman llazim yazdirilir
                        printf("Daha cok calisman lazim :) \n");
                    }
                    break;
                }
            }
        }
        else
        {
             printf("Seviye numarasini veya Soru tipi numarasini yanlis girdiniz!!\n");
        }

        printf("Yeniden denemek istermisiniz?(e veya h): ");
        scanf(" %c",&devam_edilme_durumu);
    }
    printf("Egitim programindan ciktiniz :)");
    return 0;
}

