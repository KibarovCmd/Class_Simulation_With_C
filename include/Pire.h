#ifndef PIRE_H
#define PIRE_H

#include "Bocek.h"

struct Pire {
    Bocek bocek;
    void (*delete_pire)();
};

typedef struct Pire* Pire;

Pire new_Pire();

char* gorunumPire();

void pire_delete(Pire pire);

#endif