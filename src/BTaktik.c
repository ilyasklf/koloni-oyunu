#include "BTaktik.h"

#include "Koloni.h"

BTaktik BTaktikOlustur(int* savasDegeri,int uzunluk){
    BTaktik this;    // Nesne Oluşturuluyor
    this=(BTaktik)malloc(sizeof(struct BTAKTIK));      // Nesnenin Nereden Ne kadar yer alacağı belli ediliyor
    this->b_super=koloniOlustur(savasDegeri , uzunluk );    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor
 

    this->b_super->savasDegeri=malloc(sizeof(int)*uzunluk);


  for (int i = 0; i < this->b_super->uzunluk; i++) {
    this->b_super->savasDegeri[i] = (this->b_super->yemekAdedi[i]*this->b_super->populasyonSayisi[i])/(2*this->b_super->yemekAdedi[i]+2*this->b_super->populasyonSayisi[i]);
  }

    this->Btostring=&Btostring;
   return this;
}







void Btostring(BTaktik this){
    
    printf("\n");
    for(int i=0;i<this->b_super->uzunluk;i++){
    printf("Savas Degeri: %d \n",  this->b_super->savasDegeri[i]);
    }
}
