#include "Canli.h"

Canli new_Canli() {
    Canli canli = (Canli)malloc(sizeof(struct Canli));
    canli->x = 0; canli->y = 0;
    canli->delete_canli = &canli_delete;
    return canli;
}

void canli_delete(Canli canli) {
    free(canli);
}