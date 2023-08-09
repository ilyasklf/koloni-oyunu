
#include "BUretim.h"
#include "Koloni.h"
#include <time.h>


BUretim BUretimOlustur(int* turUretim,int uzunluk){
    srand(time(NULL));
    BUretim this;    // Nesne Oluşturuluyor
    this=(BUretim)malloc(sizeof(struct BURETIM));      // Nesnenin Nereden Ne kadar yer alacağı belli ediliyor
    this->bu_super=koloniOlustur(turUretim , uzunluk );    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor
    this->bu_super->uzunluk=uzunluk;
    this->bu_super->BturUretim=malloc(sizeof(int)*uzunluk);  // Tanımlanan dizi için yer ayırılıyor
    



  for (int i = 0; i < this->bu_super->uzunluk; i++) {
    int rand_num = (rand() % 6) + 5;
    this->bu_super->BturUretim[i] = (unsigned char) rand_num;
}

    this->BUtostring=&BUtostring;
    this->BYtostring=&BYtostring;

   return this;
}

void BUtostring(BUretim this){
    printf("\n");
    for(int i=0;i<this->bu_super->uzunluk;i++){
    printf("TUR BAŞINA : %d \n",  this->bu_super->BturUretim[i]);
    }
}

void BYtostring(BUretim this){
    printf("\n");
    for(int i=0;i<this->bu_super->uzunluk;i++){
    printf("TUR BAŞINA : %d \n",  this->bu_super->yemekAdedi[i]);
    }
}