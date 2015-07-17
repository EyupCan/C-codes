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
#include <math.h>

int main()
{
    int bolen;



    printf("Gregory–Leibniz yontemiyle pi sayisi hesaplanirken seri her cift terimde kendini tekrar etmektedir, bu yuzden cift sayili terim giriniz\n");


    int aranan_terim_sayisi = 0;
    while(aranan_terim_sayisi != -1)
    {
        printf("Serinin kac terimiyle pi sayisi hesaplansin giriniz(cikmak icin -1 giriniz):");
        scanf("%d",&aranan_terim_sayisi);

        if(aranan_terim_sayisi == -1)               // -1 girilip girilmedigini kontrol ediyor
        {
            printf("Programdan ciktiniz :)");
            break;
        }

        if(aranan_terim_sayisi % 2 == 0)            //seri cift terim sayisinda dongude oldugundan onu kontrol ediyoruz
        {
            aranan_terim_sayisi = aranan_terim_sayisi * 2;  //serinin bolenleriyle terim arasindaki yaklasik iliski

            int terim_sayisi=2;
            float pi = 0;
            float seri;

            for(bolen = 1 ;bolen <= aranan_terim_sayisi ;bolen = bolen + 4)
            {
                seri = (float)4 / bolen - ((float)4 / (bolen + 2));// . dan sonraki hanelerin hesabi icin float yapildi tam sayilar
                pi = pi + seri;

                printf("Seri = %f\n",seri);
                printf("pi sayisi = %.5f\n",pi);
                printf("Kullanilan terim sayisi = %d\n",terim_sayisi);

                terim_sayisi = terim_sayisi + 2; //her dongude 2 terim kullanilmasindan dolayi arttim yapildi
            }
        }
        else
        {
            printf("Terim sayisini cift sayi giriniz!!\n");
        }
    }
    return 0;
}

