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
    int hesap_numarasi,hesap_numarasi1,hesap_numarasi2,hesap_numarasi3,kredi_limiti,bakiye,bakiye1,bakiye2,bakiye3,sayici;
    float kredi_limiti1,kredi_limiti2,kredi_limiti3;

    for (sayici=1;sayici<=3;sayici++)
    {
        printf("Musterinin hesap numarasini giriniz:");
        scanf("%d",&hesap_numarasi);

        printf("Musterinin kredi limitini giriniz:");
        scanf("%d",&kredi_limiti);

        printf("Musterinin bakiyesini giriniz:");
        scanf("%d",&bakiye);

        if (sayici == 1)
        {
            bakiye1 = bakiye;
            hesap_numarasi1 = hesap_numarasi;
            kredi_limiti1 = kredi_limiti;
            kredi_limiti1 = kredi_limiti1 / 2;
        }
        if (sayici == 2)
        {
            bakiye2 = bakiye;
            hesap_numarasi2 = hesap_numarasi;
            kredi_limiti2 = kredi_limiti;
            kredi_limiti2 = kredi_limiti2 / 2;
        }
        if (sayici == 3)
        {
            bakiye3 = bakiye;
            hesap_numarasi3 = hesap_numarasi;
            kredi_limiti3 = kredi_limiti;
            kredi_limiti3 = kredi_limiti3 / 2;
        }
    }
    printf("%d nolu musterinin yeni kredi limiti %.2f dir.\n",hesap_numarasi1,kredi_limiti1);
    printf("%d nolu musterinin yeni kredi limiti %.2f dir.\n",hesap_numarasi2,kredi_limiti2);
    printf("%d nolu musterinin yeni kredi limiti %.2f dir.\n",hesap_numarasi3,kredi_limiti3);

    if (kredi_limiti1<bakiye1)
    {
        printf("%d hesap nolu musteri yeni kredi limitini asmistir.\n",hesap_numarasi1);
    }
    if (kredi_limiti2<bakiye2)
    {
        printf("%d hesap nolu musteri yeni kredi limitini asmistir.\n",hesap_numarasi2);
    }
    if (kredi_limiti3<bakiye3)
    {
        printf("%d hesap nolu musteri yeni kredi limitini asmistir.\n",hesap_numarasi3);
    }
    return 0;
}

