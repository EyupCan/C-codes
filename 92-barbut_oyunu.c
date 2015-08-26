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
#include <time.h>

int zar_atma(void);
int zar_atma(void)
{
    int zar_1,zar_2,toplam_zar;
    zar_1 = 1 + (rand() % 6);       //1-2-3-4-5-6 sayilarindan biri random atanir
    zar_2 = 1 + (rand() % 6);       //1-2-3-4-5-6 sayilarindan biri random atanir
    toplam_zar = zar_1 + zar_2;

    printf("Oyuncu %d + %d = %d atti\n",zar_1,zar_2,toplam_zar);

    return toplam_zar;
}

int oyun(int);
int oyun(int toplam_zar)
{
    int mevcut_oyun_durumu,oyuncu_puani;

    switch(toplam_zar)
    {
    case 7:                         //ilk zar atisinda kazanma durumu
        {
            mevcut_oyun_durumu = 1;
            break;
        }
    case 11:                        //ilk zar atisinda kazanma durumu
        {
            mevcut_oyun_durumu = 1;
            break;
        }
    case 2:                         //ilk zar atisinda kaybetme durumu
        {
            mevcut_oyun_durumu = 2;
            break;
        }
    case 3:                         //ilk zar atisinda kaybetme durumu
        {
            mevcut_oyun_durumu = 2;
            break;
        }
    case 12:                        //ilk zar atisinda kaybetme durumu
        {
            mevcut_oyun_durumu = 2;
            break;
        }
    default:                        //tekrar zar atilmasini gerektiren durum
        {
            mevcut_oyun_durumu = 0;
            oyuncu_puani = toplam_zar;
            printf("Oyuncunun kazanacagi zar: %d \n",oyuncu_puani);
            break;
        }
    }
    while (mevcut_oyun_durumu == 0)         //oyuncunun ilk attigi zar veya 7 gelene kadar zar atilir
    {
        toplam_zar = zar_atma();

        if(toplam_zar == oyuncu_puani)      //kazanma durumu
        {
            mevcut_oyun_durumu = 1;
        }
        else
        {
            if(toplam_zar == 7)             //kaybetme durumu
            {
                mevcut_oyun_durumu = 2;
            }
        }
    }
    return mevcut_oyun_durumu;
}

void program_mesajlari(int);
void program_mesajlari(int mevcut_oyun_durumu)
{
    int verilcek_cevap;

    if(mevcut_oyun_durumu == 1)     //kazanma durumunda verilecek yanitlar icin random sayi uretilir
    {
        verilcek_cevap = rand() % 3;
    }
    else
    {
        verilcek_cevap = 3 + (rand() % 3); //kaybetme durumunda verilecek yanitlar icin random sayi uretilir
    }

    switch (verilcek_cevap)
    {
    case 0:                              //kazanma durumu yaniti
        {
            printf("Ooo Kazandiniz :)\n");
            break;
        }
    case 1:                             //kazanma durumu yaniti
        {
            printf("Tebrikler Paraniza para kattiniz :)\n");
            break;
        }
    case 2:                             //kazanma durumu yaniti
        {
            printf("Zenginlige yaklasiyorsunuz :)\n");
            break;
        }
    case 3:                             //kaybetme durumu yaniti
        {
            printf("Malesef kaybettiniz :/ \n");
            break;
        }
    case 4:                             //kaybetme durumu yaniti
        {
            printf("Paraniz azaliyor.. \n");
            break;
        }
    case 5:                             //kaybetme durumu yaniti
        {
            printf("Daha buyuk oyna zararini kapa!! \n");
            break;
        }
    }
}

int main()
{
    printf("Barbut oyununa hos geldiniz :)\n");

    int oyun_durumu,toplam,bahis;
    char devam_edilme_durumu = 'e';

    while(devam_edilme_durumu != 'h')
    {
        int bakiye = 1000;
        printf("Baslangic bakiyeniz = %dTL\n",bakiye);

        srand(time(NULL));

        while(bakiye != 0)
        {
            printf("Ne kadar bahis yatirdiginizi giriniz: ");
            scanf("%d",&bahis);

            if(bahis <= bakiye && bahis > 0)            //girilen bahisin bakiyeden yuksek olmasini ve negatif olmasini onler
            {
                toplam = zar_atma();
                oyun_durumu = oyun(toplam);

                if( oyun_durumu == 1)               //kazanma durumunda bakiye bahis kadar arttirilir
                {
                    program_mesajlari(oyun_durumu);
                    bakiye = bakiye + bahis;
                    printf("Mevcut bakiyeniz: %dTL\n",bakiye);

                    printf("Oyuna devam etmek istiyormusunuz?(e veya h): ");
                    scanf(" %c",&devam_edilme_durumu);

                    if(devam_edilme_durumu == 'h')      //oyundan cikilmak istendiginde mevcut parayi ekrana yazar
                    {
                        printf("Toplam alacaginiz para miktari = %dTL\n",bakiye);
                        break;
                    }
                }
                else                                //kaybetme durumunda bakiye bahis kadar azaltilir
                {
                    bakiye = bakiye - bahis;

                    if(bakiye == 0)                 //bakiye biterse programdan cikar
                    {
                        printf("Mevcut bakiyeniz: %dTL\n",bakiye);
                        printf("Malesef butun paranizi bitirdiniz..\n");
                        break;
                    }
                    else
                    {
                        program_mesajlari(oyun_durumu);
                        printf("Mevcut bakiyeniz: %dTL\n",bakiye);

                        printf("Oyuna devam etmek istiyormusunuz?(e veya h): ");
                        scanf(" %c",&devam_edilme_durumu);

                        if(devam_edilme_durumu == 'h')  //oyundan cikilmak istendiginde mevcut parayi ekrana yazar
                        {
                            printf("Toplam alacaginiz para miktari = %dTL\n",bakiye);
                            break;
                        }
                    }
                }
            }
            else
            {
                printf("Yanlis bahis girdiniz!!\n");
            }
        }
        printf("Tekrar Oynamak istermisiniz?(e veya h): ");
        scanf(" %c",&devam_edilme_durumu);
    }
    printf("Barbut Oyunundan basariyla ciktiniz :)");

    return 0;
}

