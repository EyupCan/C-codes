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

long int fibonacci_hesapla(int);
long int fibonacci_hesapla(int girilen_sayi)
{
    if(girilen_sayi == 0 || girilen_sayi == 1)
    {
        return girilen_sayi;
    }
    else            //girilen sayi sifirlanana kadar fonksiyon kendini cagirmaya devam eder
    {
        return fibonacci_hesapla(girilen_sayi - 1) + fibonacci_hesapla(girilen_sayi - 2);
    }

}

int main()
{
    char program_cikisi = 'e';
    while(program_cikisi != 'h')
    {

        int hesaplanacak_sayi;
        printf("Hesaplanmasi istediginiz fibonacci sayisini giriniz: ");
        scanf("%d",&hesaplanacak_sayi);

        if(hesaplanacak_sayi >= 0)  //fonksiyona negatif sayi gonderilmesini engeller
        {
            long int sonuc = 0;
            sonuc = fibonacci_hesapla(hesaplanacak_sayi);

            printf("fibonacci %d nin degeri %ld dir\n",hesaplanacak_sayi,sonuc);

            printf("Baska bir fibonacci sayisi hesaplamak istiyormusunuz?(e veya h): "); //while dongusunun kosul kontrol girdisi yapilir
            scanf(" %c",&program_cikisi);
        }
        else
        {
            printf("Negatif bir sayi girdiniz!!\n");
        }
    }
    printf("Programdan ciktiniz.");
    return 0;
}

