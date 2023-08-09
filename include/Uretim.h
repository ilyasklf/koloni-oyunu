#ifndef URETIM_H
#define URETIM_H

#include "Koloni.h"


struct  URETIM
{
   Koloni super;  // kalıtım oluşturdu
   void (*UretimYoket)(struct  URETIM*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor.   
};
typedef struct  URETIM* Uretim;          // İSİM DEĞİŞTİRME 

Uretim UretimOlustur(int*,int);        // KURUCU FONKSİYON TANIMLANDI
void UretimYoket(Uretim);       // Nesne Yönelimliye Benzemek için Prototip    

#endif