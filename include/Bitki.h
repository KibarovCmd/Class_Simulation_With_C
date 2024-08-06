#ifndef BITKI_H
#define BITKI_H

#include "Canli.h"

struct Bitki {
    Canli canli;
    void (*delete_bitki)();
};

typedef struct Bitki* Bitki;

Bitki new_Bitki();

char* gorunumBitki();

void bitki_delete(Bitki bitki);

#endif