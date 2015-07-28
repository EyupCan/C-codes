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

int tam_kati(int,int);
int tam_kati(int sayi_bir,int sayi_iki)
{
    int tam_kat;
    tam_kat = sayi_iki % sayi_bir;

    if(tam_kat == 0)                //tam kati ise 1 dondurdur
    {
        return 1;
    }
    else                            //tam kati degil ise 0 dondurur
    {
        return 0;
    }

}

int main()
{
    printf("ikinci sayi birincinin tam kati mi kontrol edelim\n");

    int birinci_sayi,ikinci_sayi;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&birinci_sayi);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&ikinci_sayi);

    int sonuc;
    sonuc = tam_kati(birinci_sayi,ikinci_sayi);

    if(sonuc == 1)
    {
        printf("Ikinci sayi birincinin tam katidir");
    }
    else
    {
        printf("Ikinci sayi birincinin tam kati degildir");
    }

    return 0;
}

