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
int main()
{
    srand(time(NULL));                             //time fonkiyonuyla rand fonksiyonunda rasgelelik saglanir.


    int carpim_sonucu;
    carpim_sonucu = soru_sor();

    int sonsuz_dongu = 0;
    while(sonsuz_dongu < 1)
    {
        int girilen_cevap;
        printf("Sonuc = ");
        scanf("%d",&girilen_cevap);

        if(girilen_cevap == carpim_sonucu)          //Cevap dogruysa programdan cikilir.
        {
            printf("Cok Guzel Dogru Bildin :)");
            break;
        }
        else                                        //Cevap yanlissa dogru girilene kadar sormaya devam eder.
        {
            printf("Yanlis Cevap Verdiniz Tekrar Deneyiniz :(\n");
        }
    }

    return 0;
}

