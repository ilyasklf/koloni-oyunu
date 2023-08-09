#include "Uretim.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Koloni.h"


Uretim UretimkOlustur(int* sayilar,int uzunluk){

    Uretim this;    // Nesne Oluşturuluyor
    srand(42);
    this=(Uretim)malloc(sizeof(struct URETIM));      // Nesnenin Nereden Ne kadar yer alacağı belli ediliyor
    this->super=koloniOlustur(sayilar , uzunluk );    // Kalıtım alınan superin hangi kurucu fonksiyona ait olduğu belli ediliyor

    this->UretimYoket=&UretimYoket;

    return this;
   
}

void UretimYoket(Uretim this){
    if(this==NULL) return;
    if(this->super!=NULL) this->super->koloniYoket(this->super);
    free(this);
}

