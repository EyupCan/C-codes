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

#define MIN_YIL 2012
#define MAX_AY 12
int main()
{
    int yil = 2013;

    printf("Takvimden cikmak icin -1 giriniz.\n");

    while(yil != -1)        //Programdan cikilmasi kosulu
    {
        printf("Takvimde gosterilmesi istediginiz yili giriniz(2013-..): ");
        scanf("%d",&yil);

        if(yil == -1)           //baslangicta -1 girilirse programdan cikar
        {
            printf("Programdan ciktiniz :)");
            break;
        }
        if(yil >= 2013)         //istenilen yildan kucuk bir yil girilmesini onlemek icin
        {
            int gun_adi_tutma = 0;
            int yil_farki;
            int for_sayici;

            yil_farki = yil - MIN_YIL;      //takvimde gunun ne kadar ileri gittigini bulmak icin

            for(for_sayici = 1 ;for_sayici <= yil_farki ;for_sayici++)  //yillar icinde gun adlari ayni tarihte degisir
            {                                                           //ornegin bugun 1 i pazartesidir gelecek yil sali
                if((for_sayici % 4) == 0)                               //dort e bolunebilen yillarda bu iki ileri gider
                {                                                       //geri kalan yillarda bir ileri gider
                    gun_adi_tutma = gun_adi_tutma + 2;
                }
                else
                {
                    gun_adi_tutma++;
                }
            }
            gun_adi_tutma = (gun_adi_tutma % 7); //haftanin gun sayisindan buyuk olmamasi icin mod alinir

            int ay;
            for(ay = 1 ;ay <= MAX_AY ; ay++) //her ay tekrarlanmasini saglar
            {
                switch(ay) //ay ismini gunlerin ustune basilmasini saglar
                {
                    case 1:
                        {
                            printf("%11s OCAK\n");
                            break;
                        }
                    case 2:
                        {
                            printf("%11s SUBAT\n");
                            break;
                        }
                    case 3:
                        {
                            printf("%11s MART\n");
                            break;
                        }
                    case 4:
                        {
                            printf("%11s NISAN\n");
                            break;
                        }
                    case 5:
                        {
                            printf("%11s MAYIS\n");
                            break;
                        }
                    case 6:
                        {
                            printf("%11s HAZIRAN\n");
                            break;
                        }
                    case 7:
                        {
                            printf("%11s TEMMUZ\n");
                            break;
                        }
                    case 8:
                        {
                            printf("%11s AGUSTOS\n");
                            break;
                        }
                    case 9:
                        {
                            printf("%11s EYLUL\n");
                            break;
                        }
                    case 10:
                        {
                            printf("%11s EKIM\n");
                            break;
                        }
                    case 11:
                        {
                            printf("%11s KASIM\n");
                            break;
                        }
                    case 12:
                        {
                            printf("%11s ARALIK\n");
                            break;
                        }
                }

                printf("pzt sal crş prş cum cts paz\n"); //gunlerin tarihlerin ustune yazilmasini saglar

                int bosluk_sayisi;
                for(bosluk_sayisi = 0 ;bosluk_sayisi < gun_adi_tutma ;bosluk_sayisi++) //ayin 1 i pazartesi olmadigi zamanlarda
                {                                                                      //gunlerin altina 4 bosluk basar
                    printf("    ");
                }

                int maksimum_gun_sayisi;
                if(ay == 1 || ay == 3 || ay == 5 || ay == 7 || ay == 8 || ay == 10 || ay == 12) //ay numarasina gore aydaki maksimum gunu belirler
                {
                    maksimum_gun_sayisi = 31;
                }
                else if(ay == 4 || ay == 6 || ay == 9 || ay == 11)
                {
                    maksimum_gun_sayisi = 30;
                }
                else if((yil % 4 == 0) % (ay == 2)) //artik yilda subatin maksimum gun sayisi
                {
                    maksimum_gun_sayisi = 29;
                }
                else
                {
                    maksimum_gun_sayisi = 28;
                }

                int gun_sayisi;
                for(gun_sayisi = 1; gun_sayisi <= maksimum_gun_sayisi ;gun_sayisi++) //gunleri basar
                {
                    printf("%3d ",gun_sayisi);

                    gun_adi_tutma++;

                    if((gun_adi_tutma  % 7) == 0) //hafta doldugunda bir alt satira iner
                    {
                        printf("\n");
                    }
                    gun_adi_tutma = gun_adi_tutma % 7; //bosluk sayisinin haftanin gun sayisindan fazla olmasi engellenir
                }
                printf("\n");
            }

        }
        else
        {
            printf("Yanlis yil girdiniz!!\n");
        }
    }

    return 0;
}

