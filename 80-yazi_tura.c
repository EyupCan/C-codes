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

#define MAX_ATIS_SAYISI 100

int para_at();
int para_at()
{
    int atis_sonucu;

    atis_sonucu = rand() % 2;       //mod 2 alinarak sonuclarin sadece 0 ve 1 olmasi saglanmistir.

    return atis_sonucu;

}

int main()
{
    srand(time(NULL));      //rand fonksiyonunda rasgelelik saglamak icin time parametre olarak verilir

    int atis_sayisi;
    int yazi_atilma_sayisi = 0;
    int tura_atilma_sayisi = 0;
    int atis_sonucu;

    for(atis_sayisi = 1 ;atis_sayisi <= MAX_ATIS_SAYISI ;atis_sayisi++)
    {
        atis_sonucu = para_at();

        switch(atis_sonucu) //ekrana sonuca gore yazi veya tura yazilip gelme sayilari sayilir
        {
        case 0 :
            {
                printf("Yazi\n");
                yazi_atilma_sayisi++;
                break;
            }
        case 1 :
            {
                printf("Tura\n");
                tura_atilma_sayisi++;
                break;
            }
        }
    }
    printf("%d sayisi kadar Yazi %d sayisi kadar Tura atilmistir.",yazi_atilma_sayisi,tura_atilma_sayisi);
    return 0;
}

