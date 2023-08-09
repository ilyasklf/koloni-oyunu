
#ifndef OYUN_H
#define OYUN_H

#include "stdio.h"
#include "stdlib.h"


#include "Koloni.h"
#include "ATaktik.h"
#include "AUretim.h"
#include "BUretim.h"
#include "BTaktik.h"

struct OYUN{
    Koloni o_super;             // Koloni den Kalıtım alınan    o_super
    ATaktik at_super;           // ATaktikten Kalıtım alınan    at_super
    BTaktik bt_super;           // BTaktik ten Kalıtım alınan   bt_super
    AUretim au_super;           // AUretimden Kalıtım alınan    au_super
    BUretim bu_super;           // BUretimden Kalıtım alınan    bu_super         
    int i,j,k;
    int tur;

};

typedef struct OYUN* Oyun;          // İSİM DEĞİŞTİRME 

Oyun OyunOlustur(int * , int );        // KURUCU FONKSİYON TANIMLANDI

#endif
