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

#define MAX_SAYI 100000

int mukemmel_sayi_bul(int);
int mukemmel_sayi_bul(int sayi)
{
    int bolen_sayi;
    int toplam = 0;

    for(bolen_sayi = 1 ;bolen_sayi <= (sayi/2) ;bolen_sayi++)   //sayinin yarisi kadar bolenleri dondurur
    {
        if( sayi % bolen_sayi == 0 )            //tam bolen sayiysa toplama eklenir
        {
            toplam = toplam + bolen_sayi;
        }
    }

    if(toplam == sayi)
    {
        return 1;
    }

    return 0;
}

void mukemmel_sayi_yazdir(int);
void mukemmel_sayi_yazdir(int sayi)
{
    printf("Sayi = %d \n",sayi);
    printf("Sayinin bolenleri = ");
    int bolen_sayi;

    time_t baslangic;
    time_t son;

    time(&baslangic);
    for(bolen_sayi = 1 ;bolen_sayi <= (sayi/2) ;bolen_sayi++)       //sayinin yarisina kadar bolenleri dondurur
    {
        if( sayi % bolen_sayi == 0 )                               //tam boluyosa bolen sayi yazdirilir
        {
            printf("%d ",bolen_sayi);
        }
    }
    printf("\n");

    time(&son);

    printf("Sure = %.5f \n",difftime(son,baslangic));
}

int main()
{
    int mukemmel_sayi;

    time_t baslangic;
    time_t son;

    time(&baslangic);                       //program baslangic suresi
    for(mukemmel_sayi = 1 ;mukemmel_sayi <= MAX_SAYI ;mukemmel_sayi++) //Maxsimum sayiya kadar tum sayilari
    {                                                                  //mukemmel sayi bul fonksiyonuna gonderiyoruz
        int sonuc;

        sonuc = mukemmel_sayi_bul(mukemmel_sayi);

        if(sonuc == 1)                                                 //mukemmel sayi sartini sagliyorsa bolenleri yazdirmak
        {                                                              //icin mmukemmel sayi yazdir fonksiyonu cagrilir
            mukemmel_sayi_yazdir(mukemmel_sayi);
        }
    }
    time(&son);                            //program bitis suresi

    printf("***Programin toplam suresi*** = %.3f",difftime(son,baslangic));

    return 0;
}

