#ifndef ATAKTIK_H
#define ATAKTIK_H

#include "Koloni.h"

struct ATAKTIK {
   Koloni a_super;  // Koloni den a_super ile kalıtım oluşturuldu
   void (*Atostring)(struct ATAKTIK*);       // Nesne Yönelimliye benzesin diye Prototip Oluşturuldu
   void (*ATaktikYoket)(struct ATAKTIK*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor.   

};
typedef struct ATAKTIK* ATaktik;          // İSİM DEĞİŞTİRME 

ATaktik ATaktikOlustur(int*,int);        // KURUCU FONKSİYON TANIMLANDI

void ATaktikYoket(ATaktik);       // Nesne Yönelimliye Benzemek için Prototip 

void Atostring(ATaktik);       // Nesne Yönelimliye Benzemek için Prototip

#endif



