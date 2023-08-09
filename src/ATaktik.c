#include "ATaktik.h"

#include "Koloni.h"

ATaktik ATaktikOlustur(int* savasDegeri,int uzunluk){
    ATaktik this;    // Nesne Oluşturuluyor
    this=(ATaktik)malloc(sizeof(struct ATAKTIK));      // Nesnenin Nereden Ne kadar yer alacağı belli ediliyor

    this->a_super=koloniOlustur(savasDegeri , uzunluk );    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor

    this->a_super->savasDegeri=malloc(sizeof(int)*uzunluk);  // Tanımlanan dizi için yer ayırılıyor

    for (int i = 0; i < this->a_super->uzunluk; i++) {
    int rand_num = rand() % 1000;
    this->a_super->savasDegeri[i] = (unsigned char) rand_num;
    }

    this->Atostring=&Atostring;    
    this->ATaktikYoket=&ATaktikYoket;  
   return this;
}


void Atostring(ATaktik this){
    
    printf("\n");
    for(int i=0;i<this->a_super->uzunluk;i++){
    printf("Savas Degeri: %d \n",  this->a_super->savasDegeri[i]);
    }
}

void ATaktikYoket(ATaktik this){
    if(this==NULL) return;
    free(this);
}

