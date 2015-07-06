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
    int gun;
    float ana_para,faiz,faiz_orani;

    printf("Programdan cikmak icin -1 e basiniz.\n");

    printf("Ana parayi giriniz:");
    scanf("%f",&ana_para);

    while (ana_para != -1)
    {
        printf("Faiz oranini giriniz:");
        scanf("%f",&faiz_orani);

        printf("Gun sayisini giriniz:");
        scanf("%d",&gun);

        faiz = (ana_para * faiz_orani * gun) / 365;

        printf("Faiz ucreti %.2f TL dir.\n",faiz);

        printf("Ana parayi giriniz:");
        scanf("%f",&ana_para);
    }

    if(ana_para == -1)
    {
        printf("Program sonlandirilmistir.");
    }

    return 0;
}

