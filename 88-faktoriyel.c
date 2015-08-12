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

long int faktoriyel_hesapla(int);
long int faktoriyel_hesapla(int girilen_sayi)
{
    if(girilen_sayi == 0 || girilen_sayi == 1)
    {
        return 1;
    }
    else
    {
        return faktoriyel_hesapla(girilen_sayi -1) * girilen_sayi;  //girilen sayi bir olana kadar fonksiyon kendini cagirir
    }
}

int main()
{
    char program_cikisi = 'e';
    while(program_cikisi != 'h')
    {
        int sayi;
        printf("Faktoriyeli hesaplanacak sayiyi giriniz: ");
        scanf("%d",&sayi);

        if(sayi >= 0)       //fonksiyona negatif sayi gonderilmesini engeller
        {
            long int sonuc = 0;
            sonuc = faktoriyel_hesapla(sayi);
            printf("%d! = %ld \n",sayi,sonuc);
        }
        else
        {
            printf("Pozitif bir sayi giriniz!!\n");
        }

        printf("Baska bir faktoriyel hesabi yapcakmisiniz?(e veya h): ");   //while dongusunun kosul kontrol girdisi yapilir
        scanf(" %c",&program_cikisi);
    }
    printf("Programdan ciktiniz :)");
    return 0;
}

