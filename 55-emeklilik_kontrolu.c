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

int main()
{
    int age[3];
    int kisi_sirasi;                                            //Kacinci kiside sira oldugunu belirten degisken
    int kisi_dizi_sirasi = 0;                                   //Kacinci elamani geri dondurdugunu belirten degisken

    for (kisi_sirasi=1; kisi_sirasi<=3; kisi_sirasi++)          //Diziye kisilerin yaslarini aliyoruz
    {
        printf("%d. kisinin yasini giriniz: ", kisi_sirasi);
        scanf("%d",&age[kisi_dizi_sirasi]);
        kisi_dizi_sirasi = kisi_dizi_sirasi + 1;
    }

    kisi_sirasi = 1;
    for(kisi_dizi_sirasi = 0; kisi_dizi_sirasi < 3; kisi_dizi_sirasi++)    //Emekli olup olamadiklarini kontrol ediyoruz
    {
        if(age[kisi_dizi_sirasi] >= 65)
        {
            printf("%d. kisi emekli olabilir.\n", kisi_sirasi);
        }
        else
        {
            printf("%d. kisi emekli olamaz.\n", kisi_sirasi);
        }
        kisi_sirasi = kisi_sirasi + 1;
    }
    return 0;
}

