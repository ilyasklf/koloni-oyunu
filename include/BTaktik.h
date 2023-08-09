#ifndef BTAKTIK_H
#define BTAKTIK_H

#include "Koloni.h"

struct BTAKTIK {
   Koloni b_super;             // Koloni den Kalıtım alınan    b_super
   void (*Btostring)(struct BTAKTIK*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor
};
typedef struct BTAKTIK* BTaktik;          // İSİM DEĞİŞTİRME 

BTaktik BTaktikOlustur(int*,int);        // KURUCU FONKSİYON TANIMLANDI

void Btostring(BTaktik);

#endif



