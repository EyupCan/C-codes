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
    int say100=0,say90=0,say80=0,say70=0,say60=0,
        say50=0,say40=0,say30=0,say20=0,say10=0;    //Hangi nottan kac tane alinmistir onlari saymak icin.

    int top100=0,top90=0,top80=0,top70=0,top60=0,
        top50=0,top40=0,top30=0,top20=0,top10=0;    //Genel ortalama hesaplamak icin not toplamlarini tutuyor

    int puan=0,top_puan=0,top_kisi=0;

    float ortalama=0;

    printf("Programdan cikmak icin -1 giriniz.\n");
    printf("Puani giriniz:");
    scanf("%d",&puan);

    while (puan != -1)                              //Donguden cikilma degeri
    {
        switch (puan)
        {
        case 100 :
            say100++;                               //Kac kisinin 100 aldigini sayar.
            top100 = top100 + puan;
            break;
        case 90 :
            say90++;                                //Kac kisinin 90 aldigini sayar.
            top90 = top90 + puan;
            break;
        case 80 :
            say80++;                                //Kac kisinin 80 aldigini sayar.
            top80 = top80 + puan;
            break;
        case 70 :
            say70++;                                //Kac kisinin 70 aldigini sayar.
            top70 = top70 + puan;
            break;
        case 60 :
            say60++;                                //Kac kisinin 60 aldigini sayar.
            top60 = top60 + puan;
            break;
        case 50 :
            say50++;                                //Kac kisinin 50 aldigini sayar.
            top50 = top50 + puan;
            break;
        case 40 :
            say40++;                                //Kac kisinin 40 aldigini sayar.
            top40 = top40 + puan;
            break;
        case 30 :
            say30++;                                //Kac kisinin 30 aldigini sayar.
            top30 = top30 + puan;
            break;
        case 20 :
            say20++;                                //Kac kisinin 20 aldigini sayar.
            top20 = top20 + puan;
            break;
        case 10 :
            say10++;                                //Kac kisinin 10 aldigini sayar.
            top10 = top10 + puan;
            break;
        default :                                   //Belirtilen case ler haricinde ki notlari yakalar.
            printf("Yanlis not girdiniz.\n");
        }
        printf("Puani giriniz:");
        scanf("%d",&puan);
    }

    top_puan = top80 + top70 + top60 + top50 + top40 + top30; //Ortalamayi bulmak icin puanlar toplanir.
    top_kisi = say80 + say70 + say60 + say50 + say40 + say30; //Ortalamayi bulmak icin kisi sayilari toplanir.
    ortalama = (float)top_puan / top_kisi;

    if(top_puan==0)
    {
        ortalama = 0;                   //Herkes Esik degerinin altinda puan almissa belirsizlik vermememesi icin.
    }


    printf("Not\tAlan Kisi Sayisi\n");
    printf("100%20d\n",say100);
    printf("90%21d\n",say90);
    printf("80%21d\n",say80);
    printf("70%21d\n",say70);
    printf("60%21d\n",say60);
    printf("50%21d\n",say50);
    printf("40%21d\n",say40);
    printf("30%21d\n",say30);
    printf("20%21d\n",say20);
    printf("10%21d\n",say10);

    printf("Genel ortalamaya 30'un alti ve 80'in ustu katilmamistir.\n");
    printf("Ortalamaya Katilan Kisi Sayisi\tOrtalama\n");
    printf("%30d%10.2f",top_kisi,ortalama);
    return 0;
}

