#ifndef BOCEK_H
#define BOCEK_H

#include "Canli.h"

struct Bocek {
    Canli canli;
    void (*delete_bocek)();
};
typedef struct Bocek* Bocek;

Bocek new_Bocek();

char* gorunumBocek();

void bocek_delete(Bocek bocek);

#endif