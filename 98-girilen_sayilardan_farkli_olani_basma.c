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

#define MAX_ELEMAN_SAYISI 20
#define GIRILEBILECEK_MAX_SAYI 100
#define GIRILEBILECEK_MIN_SAYI 10

int main()
{
    printf("%d ile %d arasinda %d adet sayi giriniz\n",GIRILEBILECEK_MIN_SAYI,GIRILEBILECEK_MAX_SAYI,MAX_ELEMAN_SAYISI);

    int girilen_sayilar[MAX_ELEMAN_SAYISI] = { 0 };
    int sayici;

    for(sayici = 0; sayici <= MAX_ELEMAN_SAYISI - 1; sayici++)
    {
        printf("%d. sayiyi giriniz: ",sayici + 1);      //Sayi girilir
        scanf("%d",&girilen_sayilar[sayici]);

        int eleman_sirasi;
        int kontrol = 0;

        if( (girilen_sayilar[sayici] >= GIRILEBILECEK_MIN_SAYI) && (girilen_sayilar[sayici] <= GIRILEBILECEK_MAX_SAYI) ) //Girilen sayi istenilen araliktami kontrol edilir
        {

            for(eleman_sirasi = 0; eleman_sirasi <= sayici - 1; eleman_sirasi++) //Dizide bulunan eleman kadar kontrol yapar
            {
                if(girilen_sayilar[sayici] == girilen_sayilar[eleman_sirasi])    //Daha onceden ayni sayi girildiyse kontrolu 1'e setler
                {
                    kontrol = 1;
                    break;
                }
            }
            if(kontrol == 0)                            //Girilen sayi dizide yoksa ekrana basar
            {
                printf("%d\n",girilen_sayilar[sayici]);
            }
        }
        else                                            //Girilen sayi sinirlar disindaysa ekrana metni basar ve sayiciyi azaltir
        {
            printf("Girdiginiz sayi belirlenen sinirlar icerisinde degildir!!\n");
            sayici--;
        }
    }

    return 0;
}

