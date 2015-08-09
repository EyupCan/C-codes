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

int siniflandir(int);
int siniflandir(int girilen_not)
{
    if(girilen_not >= 85)
    {
        return 5;
    }
    else if(girilen_not >= 70)
    {
        return 4;
    }
    else if(girilen_not >= 60)
    {
        return 3;
    }
    else if(girilen_not >= 50)
    {
        return 2;
    }
    else
    {
        return 1;
    }
    return 0;
}
int main()
{
    int alinan_not;
    printf("Yuzluk sistemdeki notunuzu giriniz:");
    scanf("%d",&alinan_not);

    int beslik_sistemde_not;
    beslik_sistemde_not = siniflandir(alinan_not);

    printf("Yuzluk sistemdeki %d notunuzun beslik sistemdeki degeri %d",alinan_not,beslik_sistemde_not);
    return 0;
}

