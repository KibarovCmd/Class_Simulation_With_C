#ifndef CANLI_H
#define CANLI_H

#include "stdio.h"
#include "stdlib.h"

struct Canli {
    int x, y, icerdeki_deger;
    char* (*gorunum)();
    void (*delete_canli)();
};

typedef struct Canli* Canli;

Canli new_Canli();

void canli_delete(Canli canli);

#endif