#include <stdio.h>
#include <stdlib.h>

#define MUDUR_UCRET 2000
#define VARDIYALI_ISCI_MIN_SAAT 40

#define KOMISYON_SABIT_UCRET 250

int main()
{
    printf("Programdan cikmak icin -1 giriniz\n");

    printf("1-Mudurler\n");
    printf("2-Vardiyali isciler\n");
    printf("3-Komisyon iscileri\n");
    printf("4-Parca iscileri\n");

    int sira_numarasi = 0;

    while(sira_numarasi != -1)
    {
        printf("Maasinin hesaplanmasini istediginiz calisan turunun kodunu giriniz: ");
        scanf("%d",&sira_numarasi);

        if( sira_numarasi == -1)
        {
            break;
        }

        int vardiyali_isci_calisma_saati;
        int vardiyali_isci_sabit_ucret;
        int vardiyali_isci_toplam_ucret;

        int komisyon_isci_satis;
        float komisyon_isci_satistan_alinan_ucret;
        float komisyon_isci_toplam_ucret;

        int parca_iscisi_uretim;
        int parca_iscisi_parca_fiyat;
        int parca_iscisi_maas;

        switch(sira_numarasi)
        {
            case 1:

                printf("Mudurun haftalik maasi = %dTL\n",MUDUR_UCRET);
                break;

            case 2:

                printf("Vardiyali iscinin calisma saatini giriniz(Mınumum saatin uzeri sabit ucretin 1.5 katidir): ");
                scanf("%d",&vardiyali_isci_calisma_saati);

                printf("Vardiyali iscinin saatlik sabit ucretini giriniz: ");
                scanf("%d",&vardiyali_isci_sabit_ucret);

                if(vardiyali_isci_calisma_saati <= VARDIYALI_ISCI_MIN_SAAT)
                {
                    vardiyali_isci_toplam_ucret = vardiyali_isci_calisma_saati * vardiyali_isci_sabit_ucret;
                }
                else
                {
                    vardiyali_isci_toplam_ucret = ((vardiyali_isci_calisma_saati - VARDIYALI_ISCI_MIN_SAAT) * 1.5 * vardiyali_isci_sabit_ucret) +
                                                (VARDIYALI_ISCI_MIN_SAAT * vardiyali_isci_sabit_ucret);
                }

                printf("Vardiyali iscinin haftalik maasi = %dTL\n",vardiyali_isci_toplam_ucret);

                break;
            case 3:

                printf("Komisyon iscisinin haftalik yaptigi satisi giriniz: ");
                scanf("%d",&komisyon_isci_satis);

                komisyon_isci_satistan_alinan_ucret = komisyon_isci_satis * 0.057;
                komisyon_isci_toplam_ucret = KOMISYON_SABIT_UCRET + komisyon_isci_satistan_alinan_ucret;
                printf("Komisyon iscisinin haftalik maasi = %.2fTL\n",komisyon_isci_toplam_ucret);

                break;

            case 4:

                printf("Parca iscisinin malzeme basina ucretini giriniz: ");
                scanf("%d",&parca_iscisi_parca_fiyat);

                printf("Parca iscisinin urettigi malzeme sayisini giriniz: ");
                scanf("%d",&parca_iscisi_uretim);

                parca_iscisi_maas = parca_iscisi_parca_fiyat *  parca_iscisi_uretim;

                printf("Parca iscisinin haftalik maasi = %dTL\n",parca_iscisi_maas);

                break;

            default:

                printf("Yanlis kod numarasi girdiniz!\n");
                break;
        }
    }

    printf("Programdan ciktiniz :)");

    return 0;
}

