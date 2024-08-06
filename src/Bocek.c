#include "Bocek.h"

Bocek new_Bocek() {
    Bocek bocek = (Bocek)malloc(sizeof(struct Bocek));
    bocek->canli = new_Canli();
    bocek->canli->gorunum = &gorunumBocek;
    bocek->delete_bocek = &bocek_delete;
    return bocek;

}

char* gorunumBocek() {
    return "C";
}

void bocek_delete(Bocek bocek) {
    bocek->canli->delete_canli(bocek->canli);
    free(bocek);
}
