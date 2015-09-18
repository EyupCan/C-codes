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

#define DIZI_BOYUTU 10

int dizi_kontrol(int [],int);
int dizi_kontrol(int koltuklar[],int bolum)
{
    int kontrol_sonucu,sayici;
    if(bolum == 1)              //Dizinin birinci bolmunu kontrol eder bos yer varsa 0 dondurur
    {
        for(sayici = 0; sayici <= (DIZI_BOYUTU / 2) - 1; sayici++)
        {
            if(koltuklar[sayici] == 0)
            {
                kontrol_sonucu = 0;
                return kontrol_sonucu;
            }
        }
    }

    if(bolum == 2)              //Dizinin ikinci bolmunu kontrol eder bos yer varsa 0 dondurur
    {
        for(sayici = 5; sayici <= DIZI_BOYUTU - 1; sayici++)
        {
            if(koltuklar[sayici] == 0)
            {
                kontrol_sonucu = 0;
                return kontrol_sonucu;
            }
        }
    }
    return 1;
}

void bos_yer_yazdir(int[],int);
void bos_yer_yazdir(int yazilcak_dizimiz[],int bolum)
{
    printf("Bos Yerlerin numaralari asagida siralanmistir\n\n");

    int sayici;
    if(bolum == 1)              //Dizinin birinci bolmunu kontrol eder bos yerleri ekrana yazar
    {
        for(sayici = 0; sayici <= (DIZI_BOYUTU / 2) - 1; sayici++)
        {
            if(yazilcak_dizimiz[sayici] == 0)
            {
                printf("%d ",sayici + 1);
            }
        }
        printf("\n\n");
    }

    if(bolum == 2)              //Dizinin ikinci bolmunu kontrol eder bos yerleri ekrana yazar
    {
        for(sayici = 5; sayici <= DIZI_BOYUTU - 1; sayici++)
        {
            if(yazilcak_dizimiz[sayici] == 0)
            {
                printf("%d ",sayici + 1);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int koltuk_numaralari[DIZI_BOYUTU] = { 0 };
    int bolum_1 = 0,bolum_2 = 0;
    int bolum_tercihi = 0;
    char devam_edilme_durumu = 'e';

    while(devam_edilme_durumu != 'h')
    {
        if(bolum_tercihi == 0)
        {
            printf("****Rezarvasyon sistemimize Hosgeldiniz****\n");
            printf("Sigara icilen bolum icin 1 icilmeyen bolum icin 2 giriniz: ");
            scanf("%d",&bolum_tercihi);
        }

        if(bolum_tercihi == 1 || bolum_tercihi == 2)        //Dogru bolum girildigini kontrol eder
        {
            int yer_kontrol_sonucu;
            int rezerve_edilcek_yer;

            if(bolum_tercihi == 1)
            {
                yer_kontrol_sonucu = dizi_kontrol(koltuk_numaralari,bolum_tercihi);

                if(yer_kontrol_sonucu == 0)                 //Bos yer varsa ekrana basar
                {
                    bos_yer_yazdir(koltuk_numaralari,bolum_tercihi);

                    printf("Rezerve etceginiz yeri seciniz: ");
                    scanf("%d",&rezerve_edilcek_yer);

                    if(rezerve_edilcek_yer >= 1 && rezerve_edilcek_yer <= 5)    //Rezerve edilcek yer dogru girilip girilmedigini kontrol eder
                    {
                        if(koltuk_numaralari[rezerve_edilcek_yer - 1] == 0)     //Yer bossa rezerve eder
                        {
                            printf("%d numarali bolumden %d numarali koltuk rezerve edilmistir\n",bolum_tercihi,rezerve_edilcek_yer);
                            koltuk_numaralari[rezerve_edilcek_yer - 1]++;
                            bolum_tercihi = 0;
                        }
                        else            //Daha once rezerve edilen bir numara secildiyse calisir
                        {
                            printf("Rezerve edilen yer numarasi girdiniz!!\n");
                        }
                    }
                    else                //Rezerve edilebilecek numaralardan farkli numara girildiyse calisir
                    {
                        printf("Yanlis numara girdiniz!!\n");
                    }
                }
                else                    //Istenilen bolum doluysa calisir
                {
                    char baska_yer_isteme_durumu = 'h';
                    printf("Bu bolumde bos yer bulunmamaktadir.\nSigara icilmeyen bolumden yer ayirtmak istermisiniz?(e veya h): ");
                    scanf(" %c",&baska_yer_isteme_durumu);
                    if(baska_yer_isteme_durumu == 'e')
                    {
                        bolum_tercihi = 2;
                        bolum_1 = 1;
                    }
                    else
                    {
                        bolum_1 = 1;
                        bolum_2 = 1;
                    }
                }
            }
            if(bolum_tercihi == 2)
            {
                yer_kontrol_sonucu = dizi_kontrol(koltuk_numaralari,bolum_tercihi);

                if(yer_kontrol_sonucu == 0)             //Bos yer varsa ekrana basar
                {
                    bos_yer_yazdir(koltuk_numaralari,bolum_tercihi);

                    printf("Rezerve etceginiz yeri seciniz: ");
                    scanf("%d",&rezerve_edilcek_yer);

                    if(rezerve_edilcek_yer >= 6 && rezerve_edilcek_yer <= 10)      //Rezerve edilcek yer dogru girilip girilmedigini kontrol eder
                    {
                        if(koltuk_numaralari[rezerve_edilcek_yer - 1] == 0)        //Yer bossa rezerve eder
                        {
                            printf("%d numarali bolumden %d numarali koltuk rezerve edilmistir\n",bolum_tercihi,rezerve_edilcek_yer);
                            koltuk_numaralari[rezerve_edilcek_yer - 1]++;
                            bolum_tercihi = 0;
                        }
                        else                            //Daha once rezerve edilen bir numara secildiyse calisir
                        {
                            printf("Rezerve edilen yer numarasi girdiniz!!\n");
                        }
                    }
                    else                                //Rezerve edilebilecek numaralardan farkli numara girildiyse calisir
                    {
                        printf("Yanlis numara girdiniz!!\n");
                    }
                }
                else
                {
                    char baska_yer_isteme_durumu = 'h';
                    printf("Bu bolumde bos yer bulunmamaktadir.\nSigara icilen bolumden yer ayirtmak istermisiniz?(e veya h): ");
                    scanf(" %c",&baska_yer_isteme_durumu);
                    if(baska_yer_isteme_durumu == 'e')
                    {
                        bolum_tercihi = 1;
                        bolum_2 = 1;
                    }
                    else
                    {
                        bolum_1 = 1;
                        bolum_2 = 1;
                    }
                }
            }
            if(bolum_1 == 1 && bolum_2 == 1)            //Bos yer kalmadiginda calisir ve programdan cikar
            {
                printf("Her iki bolumde de bos yer bulunmamaktadir veya Istediginiz bolumde bos yer bulunmamaktadir\nBir sonraki ucusumuz 3 saat sonra..");
                break;
            }
        }
        else                                            //Yanlis bolum numarasi girildiginde calisir
        {
            printf("Girdiginiz Bolum Numarasi Mevcut degildir!!\n\n");
            bolum_tercihi = 0;
        }
        if(bolum_1 == 0 || bolum_2 == 0)                //Programdan cikilip cikilmayacagini kontrol eder
        {
            printf("Baska Yer Ayırtmak Istermisiniz?(e veya h): ");
            scanf(" %c",&devam_edilme_durumu);
            bolum_tercihi = 0;
        }

    }
    printf("Iyi Gunler Dileriz..");
    return 0;
}

