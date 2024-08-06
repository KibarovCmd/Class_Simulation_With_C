#include "Habitat.h"

int main() {
    system("color c");
    Habitat habitat = new_Habitat();
    habitat->dosya_oku(habitat);
    habitat->konum_ayarla(habitat);
    habitat->canlilari_olustur(habitat);
    habitat->sunaki_durumun_matrisi(habitat);
    printf("Bir Tuşa Basınız...\n");
    getchar();
    system("cls");
    habitat->programi_baslat(habitat);
    habitat->habitat_delete(habitat);
    printf("\nBir Tuşa Basınız...\n");
    getchar();
    getchar();
    return 0;
}