#include "Bitki.h"

Bitki new_Bitki() {
    Bitki bitki = (Bitki)malloc(sizeof(struct Bitki));
    bitki->canli = new_Canli();
    bitki->canli->gorunum = &gorunumBitki;
    bitki->delete_bitki = &bitki_delete;
    return bitki;
}

char* gorunumBitki() {
    return "B";
}

void bitki_delete(Bitki bitki) {
    bitki->canli->delete_canli(bitki->canli);
    free(bitki);
}
