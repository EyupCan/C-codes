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

    if(dogruluk_kontrolu == 1)                  //cevap dogruysa 0 dan 4 e kadar olan sayilar uretilir
    {
        verilecek_cevap_karsiligi = rand() % 5;
    }
    else                                        //cevap yanlissa 5 den 9 a kadar olan sayilar uretir
    {
        verilecek_cevap_karsiligi = (rand() % 5) + 5;
    }

    switch(verilecek_cevap_karsiligi)
    {
    case 0:
        {
            printf("Cok iyi bildin :):)");
            break;
        }
    case 1:
        {
            printf("Mukemmelsin :)");
            break;
        }
    case 2:
        {
            printf("Aferin :)");
            break;
        }
    case 3:
        {
            printf("Boyle devam et dogru bildin :)");
            break;
        }
    case 4:
        {
            printf("Harikasin :)");
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

    int carpim_sonucu;
    carpim_sonucu = soru_sor();

    int sonsuz_dongu = 0;
    while(sonsuz_dongu < 1)
    {
        int girilen_cevap;
        printf("Sonuc = ");
        scanf("%d",&girilen_cevap);

        int cevap_kontrolu;

        if(girilen_cevap == carpim_sonucu)      //Cevap dogruysa cevap kontrolu 1 yapilir fonksiyon cagrilir
        {                                       //programdan cikilir.
            cevap_kontrolu = 1;
            cevap_karsiliklari(cevap_kontrolu);
            break;
        }
        else                                    //Cevap yanlissa cevap kontrolu 0 yapilir fonksiyon cagrilir
        {                                       //dogru girilene kadar sormaya devam eder.
            cevap_kontrolu = 0;
            cevap_karsiliklari(cevap_kontrolu);
        }
    }
    return 0;
}

