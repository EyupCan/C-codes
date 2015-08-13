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

#define MAX_SORU_SAYISI 10

int soru_sor();
int soru_sor()
{
    int birinci_sayi,ikinci_sayi,carpim;

    birinci_sayi = rand() % 10;                 //Bir basamakli sayilar elde edilir.
    ikinci_sayi  = rand() % 10;

    printf("%d kere %d kactir?\n",birinci_sayi,ikinci_sayi);

    carpim = birinci_sayi * ikinci_sayi;

    return carpim;
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

    int sonsuz_dongu = 0;
    int dogru_cevap_sayisi = 0;
    int yanlis_cevap_sayisi = 0;

    while(sonsuz_dongu < 1)
    {

        int carpim_sonucu;
        carpim_sonucu = soru_sor();

        int girilen_cevap;
        printf("Sonuc = ");
        scanf("%d",&girilen_cevap);

        int cevap_kontrolu;
        if(girilen_cevap == carpim_sonucu)      //Cevap dogruysa cevap kontrolu 1 yapilir fonksiyon cagrilir
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

        if((dogru_cevap_sayisi + yanlis_cevap_sayisi) == MAX_SORU_SAYISI)   //dogru ve yanlis cevap sayisi toplami max soruya esitse programdan cikilir
        {

            printf("%d sorudan %d dogru cevabiniz %d yanlis cevabiniz var :) \n",MAX_SORU_SAYISI,dogru_cevap_sayisi,yanlis_cevap_sayisi);

            if(yanlis_cevap_sayisi >= (MAX_SORU_SAYISI * 3) / 10 )          //cevaplarin %30 ve daha fazla si yanlis ise
            {                                                               //carpma calisman lazim yazdirilir
                printf("Carpma islemine calisman lazim :)");
            }
            break;
        }

    }
    return 0;
}

