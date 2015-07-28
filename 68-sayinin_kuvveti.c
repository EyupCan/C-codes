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

int kuvvet_hesabi(int,int);
int kuvvet_hesabi(int taban,int us)
{
    int sonuc = 1;
    int for_sayici;

    if(us == 0)
    {
        return 1;
    }

    for(for_sayici = 1 ;for_sayici <= us ;for_sayici++)
    {
        sonuc = sonuc * taban;
    }
    return sonuc;
}

int main()
{

    printf("Programdan cikmak icin us ve tabani -1 giriniz.\n");

    int girilen_taban;
    int girilen_us;
    int sonsuz_dongu = 0;
    
    while(sonsuz_dongu < 1)
    {
        printf("Us'su alinacak sayiyi giriniz: ");
        scanf("%d",&girilen_taban);

        printf("Sayinin Us'sunu giriniz: ");
        scanf("%d",&girilen_us);

        if((girilen_taban == -1) && (girilen_us == -1))
        {
            printf("Programdan ciktiniz :)");
            break;
        }
        
        int sayinin_ussu;
        if(girilen_us >= 0)
        {
            sayinin_ussu = kuvvet_hesabi(girilen_taban,girilen_us);

            printf("%10s%10s%10s\n","Taban","Ust","Sonuc");
            printf("%10d%10d%10d\n",girilen_taban,girilen_us,sayinin_ussu);
        }
        else
        {
            printf("Us kuvvetini negatif  bir sayi girmeyiniz.\n");
        }

    }

    return 0;
}

