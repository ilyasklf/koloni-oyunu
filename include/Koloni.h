#ifndef KOLONI_H
#define KOLONI_H

#include "stdio.h"
#include "stdlib.h"

struct KOLONI{

   int* savasDegeri;         // Dizi ismi Tanımlanıyor
    int * populasyonSayisi;         // Dizi ismi Tanımlanıyor
    int uzunluk;         // Dizi Uzunluğunu Almak için uzunluk Tanımlanıyor
    int * yemekAdedi;         // Dizi ismi Tanımlanıyor
    char* koloniAdi;         // Dizi ismi Tanımlanıyor
    int * turUretim;         // Dizi ismi Tanımlanıyor
    int * BturUretim;         // Dizi ismi Tanımlanıyor

    void (*koloniYoket)(struct KOLONI*);       // Prototipin Hangi Struct Olduğunu Belli Ediyor.   
};

typedef struct KOLONI* Koloni;          // İSİM DEĞİŞTİRME 

Koloni koloniOlustur(int * , int );        // KURUCU FONKSİYON TANIMLANDI

void koloniYoket(Koloni);       // Nesne Yönelimliye Benzemek için Prototip    


#endif
