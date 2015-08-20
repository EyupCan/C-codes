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
#include <math.h>

float uzaklik_hesapla(float,float,float,float);
float uzaklik_hesapla(float x1,float x2,float y1,float y2)
{
    float x_uzaklik_farki,y_uzaklik_farki;

    x_uzaklik_farki = x1 - x2;      //noktalarin x eksenindeki parametreleri arasindaki fark hesaplanir
    y_uzaklik_farki = y1 - y2;      //noktalarin y eksenindeki parametreleri arasindaki fark hesaplanir

    float x_uzaklik_farki_karesi,y_uzaklik_farki_karesi;
    x_uzaklik_farki_karesi = pow(x_uzaklik_farki,2);        //x eksenindeki farkin karesi alinir
    y_uzaklik_farki_karesi = pow(y_uzaklik_farki,2);        //y eksenindeki farkin karesi alinir

    float aralarindaki_uzaklik;
    aralarindaki_uzaklik = sqrt(x_uzaklik_farki_karesi + y_uzaklik_farki_karesi); //kareleri toplaminin koku alinir

    return aralarindaki_uzaklik;

}

int main()
{
    char devam_edilme_durumu = 'e';
    while(devam_edilme_durumu != 'h')
    {

        float x1_noktasi;               //birinci noktanin kordinatlari
        printf("x1 noktasini giriniz: ");
        scanf("%f",&x1_noktasi);
        float y1_noktasi;
        printf("y1 noktasini giriniz: ");
        scanf("%f",&y1_noktasi);

        float x2_noktasi;               //ikinci noktanin kordinatlari
        printf("x2 noktasini giriniz: ");
        scanf("%f",&x2_noktasi);
        float y2_noktasi;
        printf("y2 noktasini giriniz: ");
        scanf("%f",&y2_noktasi);

        float uzaklik;
        uzaklik = uzaklik_hesapla(x1_noktasi,x2_noktasi,y1_noktasi,y2_noktasi);
        printf("Iki nokta arasindaki uzaklik %.2f\n",uzaklik);

        printf("Baska uzaklik hesaplamak istiyormusunuz(e veya h): ");
        scanf(" %c",&devam_edilme_durumu);

    }
    printf("Programdan ciktiniz :)");
    return 0;
}

