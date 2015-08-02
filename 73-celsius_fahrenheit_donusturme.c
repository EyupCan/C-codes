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

#define MIN_CELSIUS 0
#define MAX_CELSIUS 100

#define MIN_FAHRENHEIT 2
#define MAX_FAHRENHEIT 212

void celsius_to_fahrenheit(void);
void celsius_to_fahrenheit(void)
{
    printf("%-10s%10s\n","Celsius","Fahrenheit");

    float hesaplanan_sicaklik;

    float celsius;
    for(celsius = MIN_CELSIUS ;celsius <= MAX_CELSIUS ;celsius++)
    {
        hesaplanan_sicaklik = celsius * 1.8  + 32;
        printf("%7.1f%13.1f\n",celsius,hesaplanan_sicaklik);
    }

}

void fahrenheit_to_celsius(void);
void fahrenheit_to_celsius(void)
{
    printf("%-10s%10s\n","Fahrenheit","Celsius");

    float hesaplanan_sicaklik;

    float fahrenheit;
    for(fahrenheit = MIN_FAHRENHEIT ;fahrenheit <= MAX_FAHRENHEIT ;fahrenheit++)
    {
        hesaplanan_sicaklik = ( ( fahrenheit - 32 ) * 5 ) / 9;
        printf("%10.1f%10.1f\n",fahrenheit,hesaplanan_sicaklik);
    }
}

int main()
{
    printf("1-Celsius'tan Fahrenheit'a ceviri\n");
    printf("2-Fahrenheit'tan Celsius'a ceviri\n");

    int numara;
    printf("Hangi ceviriciyi kullanmak istiyorsaniz numarasini giriniz: ");
    scanf("%d",&numara);

    switch(numara)
    {
    case 1 :
        {
            celsius_to_fahrenheit();
            break;
        }
    case 2 :
        {
            fahrenheit_to_celsius();
            break;
        }
    default :
        {
            break;
        }
    }
    return 0;
}

