#ifndef AURETIM_H
#define AURETIM_H

#include "Koloni.h"


struct  AURETIM
{
   Koloni u_super;             // Koloni den Kalıtım alınan    b_super
   void (*Utostring)(struct  AURETIM*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor
   void (*Ytostring)(struct  AURETIM*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor
   void (*AUretimYoket)(struct AURETIM*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor.
};
typedef struct  AURETIM* AUretim;          // İSİM DEĞİŞTİRME 

AUretim AUretimOlustur(int*,int);        // KURUCU FONKSİYON TANIMLANDI

void AUretimYoket(AUretim);       // Nesne Yönelimliye Benzemek için Prototip 
void Utostring(AUretim);       // Nesne Yönelimliye Benzemek için Prototip
void Ytostring(AUretim);       // Nesne Yönelimliye Benzemek için Prototip

#endif