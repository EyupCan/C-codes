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
    int fahrenheit;
    float celsius;

    printf("Celsius \tFahrenheit\n");

    for(fahrenheit=0;fahrenheit<=300;fahrenheit=fahrenheit+20)
    {
        celsius = 5 * (fahrenheit - 32)/9;
        printf("%d\t\t%.2f\n",fahrenheit,celsius);
    }


    return 0;
}

