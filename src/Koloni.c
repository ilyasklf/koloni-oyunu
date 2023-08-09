#include "Koloni.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


Koloni koloniOlustur(int * populasyonSayisi , int uzunluk){
    srand(42);
    Koloni this;    // Nesne Oluşturuluyor
    this = (Koloni)malloc(sizeof(struct KOLONI));      // Nesnenin Nereden Ne kadar yer alacağı belli ediliyor

    this->populasyonSayisi=malloc(sizeof(int)*uzunluk);  // Tanımlanan dizi için yer ayırılıyor

    this->yemekAdedi=malloc(sizeof(int)*uzunluk);  // Tanımlanan dizi için yer ayırılıyor

    this->koloniAdi=malloc(sizeof(char)*uzunluk);  // Tanımlanan dizi için yer ayırılıyor

    this->uzunluk=uzunluk;

    for(int i=0 ;i<uzunluk;i++){
        this->populasyonSayisi[i]=populasyonSayisi[i];
    }

    for(int i=0;i<uzunluk;i++){
        this->yemekAdedi[i]=populasyonSayisi[i]*populasyonSayisi[i];
    }

    for(int i=0;i<uzunluk;i++){
        this->koloniAdi[i]=(char) (rand() % 256);
    }

   this->koloniYoket=&koloniYoket;
   return this;
    
}



void koloniYoket(Koloni this){
    if(this==NULL) return;
    free(this->populasyonSayisi);
    free(this->yemekAdedi);
    free(this->koloniAdi);
    free(this->turUretim);
    free(this->BturUretim);
    free(this->savasDegeri);
    free(this);
}


