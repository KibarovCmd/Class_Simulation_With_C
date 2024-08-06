#ifndef HABITAT_H
#define HABITAT_H

#include "Bitki.h"
#include "Bocek.h"
#include "Sinek.h"
#include "Pire.h"

struct Habitat {
    int count;
    int ncount;
    int* y;
    char* real_char_dizi;
    void** konumlar;
    void (*habitat_delete)();
    void (*dosya_oku)();
    void (*programi_baslat)();
    void (*canlilari_olustur)();
    void (*konum_ayarla)();
    void (*sunaki_durumun_matrisi)();
    
};

typedef struct Habitat* Habitat;

Habitat new_Habitat();

void hesapla(Habitat habitat);

void y_konum_ayarla(Habitat habitat);

void canliolustur(Habitat habitat);

void dosya_oku1(Habitat habitat);

void matris_yazdir(Habitat habitat);

void habitat_delete1(Habitat habitat);

#endif