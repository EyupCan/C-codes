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
#include <string.h>

#define ISIMDIZIBOYUTU 20
#define PAROLADIZIBOYUTU 20

int main()
{
    char girilen_isim[ISIMDIZIBOYUTU];
    printf("Kullanici adinizi giriniz: ");
    gets(girilen_isim);
    int girilen_isim_boyutu = strlen(girilen_isim); // Dizi boyutunu karsilastirmak icin uzunluk bulundu.

    char girilen_parola[PAROLADIZIBOYUTU];
    printf("Parola giriniz: ");
    gets(girilen_parola);
    int girilen_parola_boyutu = strlen(girilen_parola); //Dizi boyutunu karsilastirmak için uzunluk bulundu.

    char kullanici_adi[] = "EyüpCan";
    char parola[] = "1234";

    int kullanici_adi_uzunlugu = strlen(kullanici_adi);
    int parola_uzunlugu = strlen(parola);

    if ((ISIMDIZIBOYUTU  > girilen_isim_boyutu) && (PAROLADIZIBOYUTU > girilen_parola_boyutu)) //gets fonksiyonuyla aldigimiz metnin
                                                                                             //dizi boyutumuzu gecip gecmedigimizi
    {                                                                                        //kontrol ettik.
        int isim_kontrol = 0;
        while(isim_kontrol < kullanici_adi_uzunlugu - 1 ) //\0 karakteride uzunluga dahil oldugu icin 1 eksik donduruldu
        {
            if (kullanici_adi[isim_kontrol] == girilen_isim[isim_kontrol]) //Dizilerin her elemani karsilastirildi
            {
                isim_kontrol++;
            }
            else
            {
                isim_kontrol = -1;
                break;
            }
        }

        int parola_kontrol = 0;
        while(parola_kontrol < parola_uzunlugu - 1) //\0 karakteride uzunluga dahil oldugu icin 1 eksik donduruldu
        {
            if(parola[parola_kontrol] == girilen_parola[parola_kontrol])//Dizilerin her elemani karsilastirildi
            {
                parola_kontrol++;
            }
            else
            {
                parola_kontrol = -1;
                break;
            }
        }

        if( (isim_kontrol == -1) || (parola_kontrol == -1))
        {
            printf("Kullanici Adi veya Parola yanliş girdiniz.");
        }
        else
        {
            printf("Kullanici Adi ve Parola Dogru");
        }

    }
    else
    {
        printf("Azami Kullanici Adi veya Parolayi gectiniz!!");
    }
    return 0;
}

