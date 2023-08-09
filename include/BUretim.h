#ifndef BURETIM_H
#define BURETIM_H

#include "Koloni.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  BURETIM
{
   Koloni bu_super;             // Koloni den Kalıtım alınan    BU_super

   void (*BUtostring)(struct  BURETIM*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor
   void (*BYtostring)(struct  BURETIM*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor
    
};
typedef struct  BURETIM* BUretim;          // İSİM DEĞİŞTİRME 

BUretim BUretimOlustur(int*,int);        // KURUCU FONKSİYON TANIMLANDI

void BUtostring(BUretim);       // Nesne Yönelimliye Benzemek için Prototip
void BYtostring(BUretim);       // Nesne Yönelimliye Benzemek için Prototip

#endif