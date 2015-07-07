/********************************************
*                                           *
*           Eyüp Can KILINÇDEMİR            *
*      KARADENİZ TEKNİK UNİVERSİTESİ        *
*          ceksoft.wordpress.com            *
*       eyupcankilincdemir@gmail.com        *
*                                           *
********************************************/

#include<stdio.h>

int main()

{
    int calisma_saati;
    float saatlik_ucret,maas,i;

    printf("Cikmak icin -1 giriniz.\n");

    printf("Calisma saatini giriniz:");
    scanf("%d",&calisma_saati);

    while (calisma_saati != -1 )
    {
        printf("Calisanin saat ucretini giriniz:(00.00) ");
        scanf("%f",&saatlik_ucret);

        if (calisma_saati <= 40)
        {
            maas = calisma_saati * saatlik_ucret;
        }
        else
        {
            i = (calisma_saati - 40) * saatlik_ucret * 1.5;
            maas = (saatlik_ucret * 40) + i;
        }
        printf("Calisanin maasi:%.3f Tl dir\n",maas);

        printf("Calisma saatini giriniz:");
        scanf("%d",&calisma_saati);

    }

    if(calisma_saati == -1)
    {
        printf("Programdan cikilmistir.");
    }

    return 0;
}

