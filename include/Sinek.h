#ifndef SINEK_H
#define SINEK_H

#include "Bocek.h"

struct Sinek {
    Bocek bocek;
    void (*delete_sinek)();
};

typedef struct Sinek* Sinek;

Sinek new_Sinek();

char* gorunumSinek();

void sinek_delete(Sinek sinek);

#endif