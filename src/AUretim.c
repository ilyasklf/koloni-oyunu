
#include "AUretim.h"
#include "Koloni.h"



AUretim AUretimOlustur(int* turUretim,int uzunluk){
    srand(42);
    AUretim this;    // Nesne Oluşturuluyor
    this=(AUretim)malloc(sizeof(struct AURETIM));      // Nesnenin Nereden Ne kadar yer alacağı belli ediliyor
    this->u_super=koloniOlustur(turUretim , uzunluk );    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor
    this->u_super->uzunluk=uzunluk;
    this->u_super->turUretim=malloc(sizeof(int)*uzunluk);  // Tanımlanan dizi için yer ayırılıyor

  for (int i = 0; i < this->u_super->uzunluk; i++) {
    int rand_num = (rand() % 6) + 1;
    this->u_super->turUretim[i] = (unsigned char) rand_num;
}
    this->Utostring=&Utostring;
    this->Ytostring=&Ytostring;
    this->AUretimYoket=&AUretimYoket;  

   return this;
}

void Utostring(AUretim this){
    printf("\n");
    
    for(int i=0;i<this->u_super->uzunluk;i++){
    printf("TUR BAŞINA : %d \n",  this->u_super->turUretim[i]);
    }
}

void Ytostring(AUretim this){
     printf("\n");
    for(int i=0;i<this->u_super->uzunluk;i++){
    printf("TUR BAŞINA : %d \n",  this->u_super->yemekAdedi[i]);
    }
}
void AUretimYoket(AUretim this){
    if(this==NULL) return;
    free(this);
}
