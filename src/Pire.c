#include "Pire.h"

Pire new_Pire() {
    Pire pire = (Pire)malloc(sizeof(struct Pire));
    pire->bocek = new_Bocek();
    pire->bocek->canli->gorunum = &gorunumPire;
    pire->delete_pire = &pire_delete;
    return pire;
}

char* gorunumPire() {
    return "P";
}

void pire_delete(Pire pire) {
    pire->bocek->delete_bocek(pire->bocek);
    free(pire);
}
