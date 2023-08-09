

#include "Oyun.h"
#include "ATaktik.h"
#include "BTaktik.h"
#include "AUretim.h"
#include "BUretim.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



Oyun OyunOlustur(int* sayilar,int uzunluk){
    Oyun this;    // Nesne Oluşturuluyor
    this=(Oyun)malloc(sizeof(struct OYUN));      // Nesnenin Nereden Ne kadar yer alacağı belli ediliyor
   
    this->o_super=koloniOlustur(sayilar , uzunluk );    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor
    this->at_super=ATaktikOlustur(sayilar,uzunluk);    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor
    this->bt_super=BTaktikOlustur(sayilar,uzunluk);    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor
    this->au_super=AUretimOlustur(sayilar,uzunluk);    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor
    this->bu_super=BUretimOlustur(sayilar,uzunluk);    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor
    this->o_super->uzunluk=uzunluk;
    int kazanma[uzunluk];
    int kaybetme[uzunluk];
    if(uzunluk >0){
        for(int i =0;i<uzunluk;i++){
            kazanma[i]=0;
            kaybetme[i]=0;
        }
    }
    
    int tur=0;
    
    int kontrol=1;
    int kosul;
    printf("TUR %d",tur);
    printf("\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("Koloni       Populasyon      YEMEK Adedi       Kazanma         Kaybetme\n");

    for (int i = 0; i < this->o_super->uzunluk; i++) {
         int yemekAdedi = this->o_super->yemekAdedi[i];
         int populasyonSayisi = this->o_super->populasyonSayisi[i];

        if (yemekAdedi <= 0 || populasyonSayisi <= 0) {
            yemekAdedi = -1;
            populasyonSayisi = -1;
        }

        if (yemekAdedi < 0 ) {  
            printf("%c\t\t--\t\t--\t        --\t\t--\t\n", this->o_super->koloniAdi[i]);
        } 
        else {
            printf("%c\t\t%d\t\t%d\t\t%d\t\t%d\n", this->o_super->koloniAdi[i], populasyonSayisi, yemekAdedi, kazanma[i], kaybetme[i]);
        }
    }
    printf("----------------------------------------------------------------------------------\n");

        while(1){

            int elenmeAdedi=0;
             for(int i=0;i<this->o_super->uzunluk;i++){
                if(this->o_super->yemekAdedi[i]<=0 || this->o_super->populasyonSayisi[i]<=0){
                    elenmeAdedi++;
                }
            }
            kosul=this->o_super->uzunluk-(elenmeAdedi);
            if(kosul==1){
                break;
            }
            

            printf("TUR  %d",(tur+1));
            printf("\n");
            for(int i=0;i<this->o_super->uzunluk;i++){
                if(tur % 2 ==0){
                    this->o_super->yemekAdedi[i]+=this->au_super->u_super->turUretim[i];
                    this->o_super->populasyonSayisi[i]=this->o_super->populasyonSayisi[i]+(this->o_super->populasyonSayisi[i]*0.2);
                    this->o_super->yemekAdedi[i]=this->o_super->yemekAdedi[i]-(2*this->o_super->populasyonSayisi[i]);
                }
                else {
                 this->bu_super->bu_super->yemekAdedi[i]+=this->bu_super->bu_super->BturUretim[i];
                 this->o_super->populasyonSayisi[i]=this->o_super->populasyonSayisi[i]+(this->o_super->populasyonSayisi[i]*0.2);
                 this->o_super->yemekAdedi[i]=this->o_super->yemekAdedi[i]-(2*this->o_super->populasyonSayisi[i]);
                }
            }

            for(int i = 0; i < this->o_super->uzunluk; i++) {
                for(int j = 0; j < this->o_super->uzunluk; j++) {
                    if(tur % 2 ==0){
                        if(this->at_super->a_super->savasDegeri[i] > this->at_super->a_super->savasDegeri[j]) {
                            double yemekAzalma = this->o_super->yemekAdedi[j] * 0.1;
                            double yemekArtma = this->o_super->yemekAdedi[j] * 0.1;

                            this->o_super->populasyonSayisi[j] -= this->o_super->populasyonSayisi[j] * 0.1;
                            this->o_super->yemekAdedi[j] -= yemekAzalma;
                            this->o_super->yemekAdedi[i] += yemekArtma;

                            kazanma[i]++;
                            kaybetme[j]++;
                        }    
                    }
                    else {
                        if(this->bt_super->b_super->savasDegeri[i] > this->bt_super->b_super->savasDegeri[j]) {
                        double yemekAzalma = this->o_super->yemekAdedi[j] * 0.1;
                        double yemekArtma = this->o_super->yemekAdedi[j] * 0.1;
                        this->o_super->populasyonSayisi[j] -= this->o_super->populasyonSayisi[j] * 0.1;
                        this->o_super->yemekAdedi[j] -= yemekAzalma;
                        this->o_super->yemekAdedi[i] += yemekArtma;
                        kazanma[i]++;
                        kaybetme[j]++;
                        }
                    }
                }
            }  

            tur++;
            printf("----------------------------------------------------------------------------------\n");
            printf("Koloni       Populasyon      YEMEK Adedi       Kazanma         Kaybetme\n");

            for (int i = 0; i < this->o_super->uzunluk; i++) {
                int yemekAdedi = this->o_super->yemekAdedi[i];
                int populasyonSayisi = this->o_super->populasyonSayisi[i];

                if (yemekAdedi <= 0 || populasyonSayisi <= 0) {
                    yemekAdedi = -1;
                    populasyonSayisi = -1;
                }              

                if (yemekAdedi < 0 || populasyonSayisi <=0) {  
                    printf("%c\t\t--\t\t--\t        --\t\t--\t\n", this->o_super->koloniAdi[i]);
                } 
                else {
                    printf("%c\t\t%d\t\t%d\t\t%d\t\t%d\n", this->o_super->koloniAdi[i], populasyonSayisi, yemekAdedi, kazanma[i], kaybetme[i]);
                }
            }
            printf("----------------------------------------------------------------------------------\n");
        }
        return this;
}

