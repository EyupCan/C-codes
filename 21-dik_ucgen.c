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
    int kenar1,kenar2,hipotenus,hipotenus_limiti,ucgen_sayisi=0;

    printf("Hipotenusun limitini giriniz:");
    scanf("%d",&hipotenus_limiti);

    for(kenar1=1;kenar1<500;kenar1++)
    {
        for(kenar2=1;kenar2<500;kenar2++)
        {
            for(hipotenus=1;hipotenus<=hipotenus_limiti;hipotenus++)
            {
                if(hipotenus*hipotenus == kenar1*kenar1 + kenar2*kenar2)
                {

                printf("%d\t%d\t%d\n",kenar1,kenar2,hipotenus);
                ucgen_sayisi++;

                }
            }
        }
    }
    printf("Bulunan ucgen sayisi:%d",ucgen_sayisi);
        return 0;
}

