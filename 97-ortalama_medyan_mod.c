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

#define DIZI_BOYUTU 100
#define MAX_RAKAM 9

void ortalama(const int[]);
void ortalama(const int sayilar[])              //dizinin ortalamasini alir
{
    int sayici;
    int toplam = 0;

    printf("%s\n%s\n%s\n","***********","Ortalama","***********");

    for(sayici = 0; sayici <= DIZI_BOYUTU - 1; sayici++)  //Dizinin elemanlari tek tek toplanir
    {
        toplam = toplam + sayilar[sayici];
    }

    double ortalama;
    ortalama = (double)toplam / DIZI_BOYUTU;        //Dizinin elemanlari toplaminin ortalamasi alinir

    printf("Toplamlari %d olan %d sayinin ortalamasi %.3f dir.\n\n",toplam,DIZI_BOYUTU,ortalama);
}

void medyan(int[]);
void medyan(int sayilar[])                      //dizinin medyanini bulur
{
    printf("%s\n%s\n%s\n","***********","Medyan","***********");

    printf("\n ****Sıralanmamis Dizi**** \n");
    dizi_yazdir(sayilar);

    printf("\n\n ****Sıralanmiş Dizi**** \n");
    bubble_sort(sayilar);
    dizi_yazdir(sayilar);

    printf("\n\nMedyan ortadaki elemandir.\n");

    if(DIZI_BOYUTU % 2 == 0)            //Dizinin eleman sayisi çift ise medyani ortadaki iki elemanin aritmetik ortalamasi ile bulur.
    {
        float aritmatik_ortalama;
        aritmatik_ortalama = ( sayilar[(DIZI_BOYUTU / 2) - 1] + sayilar[DIZI_BOYUTU / 2] ) / 2;

        printf("Bizim siralanmis %d elemanli dizimizde medyan ortadaki iki elemanin aritmatik ortalamasidir \n",DIZI_BOYUTU,DIZI_BOYUTU/2);
        printf("Bu elemanlar %d ve %d dir.\n",sayilar[(DIZI_BOYUTU / 2) - 1],sayilar[DIZI_BOYUTU/2]);
        printf("Bu iki sayinin aritmatik ortalamasi %.3f dir",aritmatik_ortalama);
    }
    else                                //Dizinin eleman sayisi tek ise ortadaki elemani yazdirir.
    {
        printf("Bizim siralanmis %d elemanli dizimizde medyan %d. elemandir.\n",DIZI_BOYUTU,DIZI_BOYUTU/2);
        printf("Bu eleman %d dir.\n",sayilar[DIZI_BOYUTU/2]);
    }
}

void mod(int[],const int[]);
void mod(int frek[],const int sayilar[])        //dizinin modunu bulur
{
    printf("\n%s\n%s\n%s\n","***********","Mod","***********");

    int sayici;
    for(sayici = 0; sayici <= DIZI_BOYUTU -1; sayici++)
    {
        ++frek[sayilar[sayici]];
    }

    printf("%15s%11s%15s\n\n","Rakamlar","Frekans","Histogram");

    int rakam;
    int tekrar_sayisi = -1;
    int mod_degeri = 0;
    int mod_degerleri[MAX_RAKAM * 2] = {0};
    int sira = 0;

    for(rakam = 1; rakam <= MAX_RAKAM; rakam++)
    {
        printf("%15d%11d\t",rakam,frek[rakam]);

        if(frek[rakam] == tekrar_sayisi) //Eger tekrar sayisi yeni gelen rakamla ayni ise dizinin ilk elemani rakam
        {                                //ikinci elemani tekrar sayisi olacak sekilde diziye atanir
            mod_degerleri[sira] = rakam;
            mod_degerleri[sira + 1] = tekrar_sayisi;
            sira = sira + 2;
        }

        if(frek[rakam] > tekrar_sayisi) //Eger gelen rakamin frekansi tekrar sayisindan buyukse dizinin ilk elemaninin uzerine
        {                               //rakam ve tekrar sayisi yazilir
            sira = 0;

            tekrar_sayisi = frek[rakam];
            mod_degerleri[sira] = rakam;
            mod_degerleri[sira + 1] = tekrar_sayisi;
            mod_degeri = rakam;

            sira = sira + 2;
        }

        for(sayici = 1; sayici <= frek[rakam]; sayici++)    //tekrar sayilari kadar yildiz basar
        {
            printf("*");
        }

        printf("\n");
    }

    sira = 0;
    if(mod_degerleri[sira + 1] == mod_degerleri[sira + 3]) //Tekrar sayisi maksimum olan birden fazla elemani ekrana yazar
    {
        printf("Tekrar sayisi maksimum tekrar sayisiyla ayni olan birden fazla eleman vardir.\n");
        printf("Bunlar: ");
        while(mod_degerleri[sira + 1] == mod_degerleri[sira + 3])
        {
            if(sira == 0)
            {
                printf(" %d %d",mod_degerleri[sira],mod_degerleri[sira + 2]);
            }
            else
            {
                printf(" %d",mod_degerleri[sira + 2]);
            }
            sira = sira + 2;
        }
    }
    else                                            //Tekrar sayisi maksimum olan bir eleman varsa ekrana yazar
    {
        printf("En sık kullanilan deger mod dur.\n");
        printf("Bu dizide mod %d dir.\n",mod_degeri);
        printf("Tekrar sayisi %d dir.",tekrar_sayisi);
    }
}

void bubble_sort(int []);
void bubble_sort(int siralanacak_dizi[])        //diziyi kucukten buyuge dogru siralar
{
    int tur_sayisi,gezilcek_eleman_sayisi;
    gezilcek_eleman_sayisi = DIZI_BOYUTU;

    for(tur_sayisi = 1; tur_sayisi <= DIZI_BOYUTU - 1; tur_sayisi++)   //eleman sayisindan 1 az olacak sekilde diziyi turlar
    {
        int ara_deger_tutucu,sira;
        for(sira = 0; sira <= gezilcek_eleman_sayisi - 2; sira++)   //diziyi gezer ve siralar
        {
            if(siralanacak_dizi[sira] > siralanacak_dizi[sira + 1])
            {
                ara_deger_tutucu = siralanacak_dizi[sira];
                siralanacak_dizi[sira] = siralanacak_dizi[sira + 1];
                siralanacak_dizi[sira + 1] = ara_deger_tutucu;
            }
        }
        gezilcek_eleman_sayisi--;           //her tur sonunda en buyuk eleman bulundugu icin gezilcek eleman sayisini azaltir
    }
}

void dizi_yazdir(const int []);
void dizi_yazdir(const int yazilcak_dizi[])       //dizinin elemanlarini ekrana yazar
{
    int sira;

    for(sira = 0; sira <= DIZI_BOYUTU - 1; sira++)
    {
        if(sira % 10 == 0)
        {
            printf("\n");
        }
        printf("%d  ",yazilcak_dizi[sira]);
    }
}

int main()
{
    int frekans[10] = { 0 };
    int sayilar[DIZI_BOYUTU] =
    { 1,2,3,4,5,4,3,5,9,9,
      8,1,5,6,7,8,2,5,6,6,
      5,9,7,8,9,2,9,6,9,8,
      5,6,2,9,8,3,6,8,6,2,
      3,5,8,6,9,8,6,7,6,5,
      2,8,5,1,2,3,7,8,5,6,
      9,8,7,5,4,1,3,8,7,4,
      5,1,8,9,7,3,5,4,8,7,
      1,4,3,8,9,1,9,8,6,2,
      3,4,7,5,9,6,5,9,1,9
    };

    ortalama(sayilar);
    medyan(sayilar);
    mod(frekans,sayilar);
    return 0;
}

