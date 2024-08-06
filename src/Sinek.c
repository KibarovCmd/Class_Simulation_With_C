#include "Sinek.h"

Sinek new_Sinek() {
    Sinek sinek = (Sinek)malloc(sizeof(struct Sinek));
    sinek->bocek = new_Bocek();
    sinek->bocek->canli->gorunum = &gorunumSinek;
    sinek->delete_sinek = &sinek_delete;
    return sinek;
}

char* gorunumSinek() {
    return "S";
}

void sinek_delete(Sinek sinek) {
    sinek->bocek->delete_bocek(sinek->bocek);
    free(sinek);
}