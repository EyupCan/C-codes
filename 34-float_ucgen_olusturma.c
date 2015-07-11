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
    float sayi_1,sayi_2,sayi_3,i;
    printf("Cıkıs icin -1 giriniz.\n");

    printf("Birinci sayiyi giriniz:");
    scanf("%f",&sayi_1);


    while (sayi_1!=-1)
    {
        printf("Ikinci sayiyi giriniz:");
        scanf("%f",&sayi_2);

        printf("Ucuncu sayiyi giriniz:");
        scanf("%f",&sayi_3);

        if (((sayi_3-sayi_2) < sayi_1 && sayi_1 < (sayi_2+sayi_3)) //ucgen olusturma kuralina gore sayilari test ediyor
            && ((sayi_3-sayi_1) < sayi_2 && sayi_2 < (sayi_3+sayi_1))
            && ((sayi_2-sayi_1) < sayi_3 && sayi_3 < (sayi_2+sayi_1)))
        {
            printf("Bu sayilarla bir ucgen olusturulabilir.\n");
        }
        else
        {
            printf("Bu sayilarla bir ucgen olusturulamaz.\n");
        }
        printf("Birinci sayiyi giriniz:");
        scanf("%f",&sayi_1);
    }
    printf("Program sonlandirilmistir.");
    return 0;
}

