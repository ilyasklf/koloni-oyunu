#include "Taktik.h"

#include <stdlib.h>
#include <string.h>
#include "Koloni.h"


Taktik TaktikOlustur(int* sayilar,int uzunluk){

    Taktik this;    // Nesne Oluşturuluyor
    srand(42);
    this=(Taktik)malloc(sizeof(struct TAKTIK));      // Nesnenin Nereden Ne kadar yer alacağı belli ediliyor
    this->super=koloniOlustur(sayilar , uzunluk );    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor

    this->TaktikYoket=&TaktikYoket;

    return this;
   
}

void TaktikYoket(Taktik this){
    if(this==NULL) return;
    if(this->super!=NULL) this->super->koloniYoket(this->super);
    free(this);
}

