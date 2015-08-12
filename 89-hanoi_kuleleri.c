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

void hanoi_kuleleri(int,char,char,char);
void hanoi_kuleleri(int disk_sayisi,char disklerin_bulundugu_cubuk,char ara_tasima_cubugu,char disklerin_tasindigi_cubuk)
{
    if(disk_sayisi == 1)
    {
        printf("Disk %c cubugundan %c cubuguna koyulur \n",disklerin_bulundugu_cubuk,disklerin_tasindigi_cubuk);
    }
    else
    {
        hanoi_kuleleri(disk_sayisi - 1,disklerin_bulundugu_cubuk ,disklerin_tasindigi_cubuk ,ara_tasima_cubugu);
        hanoi_kuleleri(1,disklerin_bulundugu_cubuk ,ara_tasima_cubugu ,disklerin_tasindigi_cubuk);
        hanoi_kuleleri(disk_sayisi - 1 ,ara_tasima_cubugu ,disklerin_bulundugu_cubuk ,disklerin_tasindigi_cubuk);
    }
}

int main()
{
    int disklerin_sayisi;
    printf("Cubukta kac disk oldugunu giriniz: ");
    scanf("%d",&disklerin_sayisi);

    char disklerin_bulundugu_cubuk_adi;
    printf("Disklerin bulundugu cubugun adini giriniz(1 karakter giriniz): ");
    scanf(" %c",&disklerin_bulundugu_cubuk_adi);

    char ara_tasima_cubugu_adi;
    printf("Ara tasima cubugunun adini giriniz(1 karakter giriniz): ");
    scanf(" %c",&ara_tasima_cubugu_adi);

    char disklerin_tasindigi_cubuk_adi;
    printf("Disklerin tasincagi cubugun adini giriniz(1 karakter giriniz): ");
    scanf(" %c",&disklerin_tasindigi_cubuk_adi);

    hanoi_kuleleri(disklerin_sayisi,disklerin_bulundugu_cubuk_adi,ara_tasima_cubugu_adi,disklerin_tasindigi_cubuk_adi);

    return 0;
}

