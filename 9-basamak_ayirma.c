/********************************************
*                                           *
*           Eyüp Can KILINÇDEMİR            *
*      KARADENİZ TEKNİK UNİVERSİTESİ        *
*          ceksoft.wordpress.com            *
*       eyupcankilincdemir@gmail.com        *
*                                           *
********************************************/

#include<stdio.h>

int main()
{
    int sayi1,birler,onlar,yuzler,binler,onbinler;

    printf("Bu program girdiginiz sayinin ilk 5 basamagini soyler.\n");
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi1);

    onbinler = sayi1    / 10000;
    onbinler = onbinler % 10;

    binler   = sayi1    / 1000;
    binler   = binler   % 10;

    yuzler   = sayi1    / 100;
    yuzler   = yuzler   % 10;

    onlar    = sayi1    / 10;
    onlar    = onlar    % 10;

    birler   = sayi1    % 10;


    printf("Onbinler basamagi:%d\nBinler basamagi:%d\nYuzler basamagi:%d\nOnlar basamagi:%d\nBirler basamagi:%d",onbinler,binler,yuzler,onlar,birler);

    return 0;

}

