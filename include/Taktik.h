#ifndef TAKTIK_H
#define TAKTIH_H

#include "Koloni.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  TAKTIK
{
   Koloni super;  // kalıtım oluşturdu
   void (*TaktikYoket)(struct  TAKTIK*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor.   
};
typedef struct  TAKTIK* Taktik;          // İSİM DEĞİŞTİRME 

Taktik TaktikOlustur(int*,int);        // KURUCU FONKSİYON TANIMLANDI
void TaktikYoket(Taktik);       // Nesne Yönelimliye Benzemek için Prototip    

#endif