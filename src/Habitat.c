#include "Habitat.h"
Habitat new_Habitat() {
    Habitat habitat = (Habitat)malloc(sizeof(struct Habitat));
    habitat->habitat_delete = &habitat_delete1;
    habitat->dosya_oku = &dosya_oku1;
    habitat->programi_baslat = &hesapla;
    habitat->konum_ayarla = &y_konum_ayarla;
    habitat->canlilari_olustur = &canliolustur;
    habitat->sunaki_durumun_matrisi = &matris_yazdir;
}
void hesapla(Habitat habitat) {
    Bitki bitki = new_Bitki();
    Bocek bocek = new_Bocek();
    Pire pire = new_Pire();
    Sinek sinek = new_Sinek();
    int subIndex = 0, nextIndex = 1;
    habitat->sunaki_durumun_matrisi(habitat);
    while(1) {
        system("cls");
        habitat->sunaki_durumun_matrisi(habitat);
        if(nextIndex == habitat->count) break;
        if(habitat->real_char_dizi[subIndex] == *(bitki->canli->gorunum(bitki)) && habitat->real_char_dizi[nextIndex] == *(bitki->canli->gorunum(bitki))) {
            if(((Bitki)habitat->konumlar[subIndex])->canli->icerdeki_deger != ((Bitki)habitat->konumlar[nextIndex])->canli->icerdeki_deger) {
                if(((Bitki)habitat->konumlar[subIndex])->canli->icerdeki_deger > ((Bitki)habitat->konumlar[nextIndex])->canli->icerdeki_deger) {
                    ((Bitki)habitat->konumlar[nextIndex])->delete_bitki(((Bitki)habitat->konumlar[nextIndex]));
                    habitat->konumlar[nextIndex] = NULL; nextIndex++;
                }
                else {
                    ((Bitki)habitat->konumlar[subIndex])->delete_bitki(((Bitki)habitat->konumlar[subIndex]));
                    habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
                }
            }
            else {
                ((Bitki)habitat->konumlar[nextIndex])->delete_bitki(((Bitki)habitat->konumlar[nextIndex]));
                habitat->konumlar[nextIndex] = NULL; nextIndex++;
            }
        }
        else if(habitat->real_char_dizi[subIndex] == *(bitki->canli->gorunum(bitki)) && habitat->real_char_dizi[nextIndex] == *(bocek->canli->gorunum(bocek))) {
            ((Bitki)habitat->konumlar[subIndex])->delete_bitki(((Bitki)habitat->konumlar[subIndex]));
            habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(bitki->canli->gorunum(bitki)) && habitat->real_char_dizi[nextIndex] == *(pire->bocek->canli->gorunum(pire))) {
            ((Pire)habitat->konumlar[nextIndex])->delete_pire((Pire)habitat->konumlar[nextIndex]);
            habitat->konumlar[nextIndex] = NULL; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(bitki->canli->gorunum(bitki)) && habitat->real_char_dizi[nextIndex] == *(sinek->bocek->canli->gorunum(sinek))) {
            ((Sinek)habitat->konumlar[nextIndex])->delete_sinek((Sinek)habitat->konumlar[nextIndex]);
            habitat->konumlar[nextIndex] = NULL; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(bocek->canli->gorunum(bocek)) && habitat->real_char_dizi[nextIndex] == *(bocek->canli->gorunum(bocek))) {
            if(((Bocek)habitat->konumlar[subIndex])->canli->icerdeki_deger != ((Bocek)habitat->konumlar[nextIndex])->canli->icerdeki_deger) {
                if(((Bocek)habitat->konumlar[subIndex])->canli->icerdeki_deger > ((Bocek)habitat->konumlar[nextIndex])->canli->icerdeki_deger) {
                    ((Bocek)habitat->konumlar[nextIndex])->delete_bocek(((Bocek)habitat->konumlar[nextIndex]));
                    habitat->konumlar[nextIndex] = NULL; nextIndex++;
                }
                else {
                    ((Bocek)habitat->konumlar[subIndex])->delete_bocek(((Bocek)habitat->konumlar[subIndex]));
                    habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
                }
            }
            else {
                ((Bocek)habitat->konumlar[nextIndex])->delete_bocek(((Bocek)habitat->konumlar[nextIndex]));
                habitat->konumlar[nextIndex] = NULL; nextIndex++;
            }
        }
        else if(habitat->real_char_dizi[subIndex] == *(bocek->canli->gorunum(bocek)) && habitat->real_char_dizi[nextIndex] == *(sinek->bocek->canli->gorunum(sinek))) {
            ((Bocek)habitat->konumlar[subIndex])->delete_bocek(((Bocek)habitat->konumlar[subIndex]));
            habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(bocek->canli->gorunum(bocek)) && habitat->real_char_dizi[nextIndex] == *(bitki->canli->gorunum(bitki))) {
            ((Bitki)habitat->konumlar[nextIndex])->delete_bitki(((Bitki)habitat->konumlar[nextIndex]));
            habitat->konumlar[nextIndex] = NULL; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(bocek->canli->gorunum(bocek)) && habitat->real_char_dizi[nextIndex] == *(pire->bocek->canli->gorunum(pire))) {
            ((Pire)habitat->konumlar[nextIndex])->delete_pire((Pire)habitat->konumlar[nextIndex]);
            habitat->konumlar[nextIndex] = NULL; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(pire->bocek->canli->gorunum(pire)) && habitat->real_char_dizi[nextIndex] == *(pire->bocek->canli->gorunum(pire))) {
            if(((Pire)habitat->konumlar[subIndex])->bocek->canli->icerdeki_deger != ((Pire)habitat->konumlar[nextIndex])->bocek->canli->icerdeki_deger) {
                if(((Pire)habitat->konumlar[subIndex])->bocek->canli->icerdeki_deger > ((Pire)habitat->konumlar[nextIndex])->bocek->canli->icerdeki_deger) {
                    ((Pire)habitat->konumlar[nextIndex])->delete_pire((Pire)habitat->konumlar[nextIndex]);
                    habitat->konumlar[nextIndex] = NULL; nextIndex++;
                }
                else {
                    ((Pire)habitat->konumlar[subIndex])->delete_pire((Pire)habitat->konumlar[subIndex]);
                    habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
                }
            }
            else {
                ((Pire)habitat->konumlar[nextIndex])->delete_pire((Pire)habitat->konumlar[nextIndex]);
                habitat->konumlar[nextIndex] = NULL; nextIndex++;
            }
        }
        else if(habitat->real_char_dizi[subIndex] == *(pire->bocek->canli->gorunum(pire)) && habitat->real_char_dizi[nextIndex] == *(bitki->canli->gorunum(bitki))) {
            ((Pire)habitat->konumlar[subIndex])->delete_pire((Pire)habitat->konumlar[subIndex]);
            habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(pire->bocek->canli->gorunum(pire)) && habitat->real_char_dizi[nextIndex] == *(bocek->canli->gorunum(bocek))) {
            ((Pire)habitat->konumlar[subIndex])->delete_pire((Pire)habitat->konumlar[subIndex]);
            habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(pire->bocek->canli->gorunum(pire)) && habitat->real_char_dizi[nextIndex] == *(sinek->bocek->canli->gorunum(sinek))) {
            ((Pire)habitat->konumlar[subIndex])->delete_pire((Pire)habitat->konumlar[subIndex]);
            habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(sinek->bocek->canli->gorunum(sinek)) && habitat->real_char_dizi[nextIndex] == *(sinek->bocek->canli->gorunum(sinek))) {
            if(((Sinek)habitat->konumlar[subIndex])->bocek->canli->icerdeki_deger != ((Sinek)habitat->konumlar[nextIndex])->bocek->canli->icerdeki_deger) {
                if(((Sinek)habitat->konumlar[subIndex])->bocek->canli->icerdeki_deger > ((Sinek)habitat->konumlar[nextIndex])->bocek->canli->icerdeki_deger) {
                    ((Sinek)habitat->konumlar[nextIndex])->delete_sinek(((Sinek)habitat->konumlar[nextIndex]));
                    habitat->konumlar[nextIndex] = NULL; nextIndex++;
                }
                else {
                    ((Sinek)habitat->konumlar[subIndex])->delete_sinek(((Sinek)habitat->konumlar[subIndex]));
                    habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
                }
            }
            else {
                ((Sinek)habitat->konumlar[nextIndex])->delete_sinek(((Sinek)habitat->konumlar[nextIndex]));
                habitat->konumlar[nextIndex] = NULL; nextIndex++;
            }
        }
        else if(habitat->real_char_dizi[subIndex] == *(sinek->bocek->canli->gorunum(sinek)) && habitat->real_char_dizi[nextIndex] == *(bitki->canli->gorunum(bitki))) {
            ((Sinek)habitat->konumlar[subIndex])->delete_sinek(((Sinek)habitat->konumlar[subIndex]));
            habitat->konumlar[subIndex] = NULL; subIndex = nextIndex; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(sinek->bocek->canli->gorunum(sinek)) && habitat->real_char_dizi[nextIndex] == *(bocek->canli->gorunum(bocek))) {
            ((Bocek)habitat->konumlar[nextIndex])->delete_bocek(((Bocek)habitat->konumlar[nextIndex]));
            habitat->konumlar[nextIndex] = NULL; nextIndex++;
        }
        else if(habitat->real_char_dizi[subIndex] == *(sinek->bocek->canli->gorunum(sinek)) && habitat->real_char_dizi[nextIndex] == *(pire->bocek->canli->gorunum(pire))) {
            ((Pire)habitat->konumlar[nextIndex])->delete_pire((Pire)habitat->konumlar[nextIndex]);
            habitat->konumlar[nextIndex] = NULL; nextIndex++;
        }
    }
    if(habitat->real_char_dizi[subIndex] == *(bitki->canli->gorunum(bitki))) printf("Kazanan: %s->[%d,%d]", ((Bitki)habitat->konumlar[subIndex])->canli->gorunum((Bitki)habitat->konumlar[subIndex]), ((Bitki)habitat->konumlar[subIndex])->canli->y, ((Bitki)habitat->konumlar[subIndex])->canli->x);
    else if(habitat->real_char_dizi[subIndex] == *(bocek->canli->gorunum(bocek))) printf("Kazanan: %s->[%d,%d]", ((Bocek)habitat->konumlar[subIndex])->canli->gorunum((Bocek)habitat->konumlar[subIndex]), ((Bocek)habitat->konumlar[subIndex])->canli->y, ((Bocek)habitat->konumlar[subIndex])->canli->x);
    else if(habitat->real_char_dizi[subIndex] == *(pire->bocek->canli->gorunum(pire))) printf("Kazanan: %s->[%d,%d]", ((Pire)habitat->konumlar[subIndex])->bocek->canli->gorunum((Pire)habitat->konumlar[subIndex]), ((Pire)habitat->konumlar[subIndex])->bocek->canli->y, ((Pire)habitat->konumlar[subIndex])->bocek->canli->x);
    else if(habitat->real_char_dizi[subIndex] == *(sinek->bocek->canli->gorunum(sinek))) printf("Kazanan: %s->[%d,%d]", ((Sinek)habitat->konumlar[subIndex])->bocek->canli->gorunum((Sinek)habitat->konumlar[subIndex]), ((Sinek)habitat->konumlar[subIndex])->bocek->canli->y, ((Sinek)habitat->konumlar[subIndex])->bocek->canli->x);
    free(bitki);
    free(bocek);
    free(pire);
    free(sinek);
}
void dosya_oku1(Habitat habitat) {
    FILE *file = fopen("Veri.txt", "r");
    if (file == NULL) {
        file = fopen("../Veri.txt", "r");
        if (file == NULL) {
            printf("Veri.txt dosyası bulunamadı.\n");
            return;
        }
    }
    FILE *tempFile = fopen("temp.txt", "w");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') fprintf(tempFile, " 999\n");
        else fputc(ch, tempFile);
    }
    fprintf(tempFile, " 999");
    fclose(file);
    fclose(tempFile);
}
void y_konum_ayarla(Habitat habitat) {
    FILE* tempFile = fopen("temp.txt", "r");
    int num; habitat->count = 0; int info = 0;
    while (fscanf(tempFile, "%d", &num) == 1) {
        if(num != 999) habitat->count++;
        else info++;
    }
    habitat->ncount = info;
    habitat->y = malloc(sizeof(int) * info);
    fclose(tempFile);
}
void canliolustur(Habitat habitat) {
    habitat->real_char_dizi = (char*)malloc(sizeof(char) * (habitat->count));
    habitat->konumlar = (void*)malloc(sizeof(void*) * (habitat->count));
    FILE* tempFile = fopen("temp.txt", "r");
    int num1, count = 0, i = 0, x = 0, y = 0, numbercountinoneline = 0, p = 0;
    while (fscanf(tempFile, "%d", &num1) == 1) {
        if(num1 >= 1 && num1 <= 9) {
            Bitki b = new_Bitki();
            b->canli->x = x;
            b->canli->y = y;
            b->canli->icerdeki_deger = num1;
            habitat->konumlar[i] = b; 
            habitat->real_char_dizi[i] = *(b->canli->gorunum(b));
        }
        else if(num1 >= 10 && num1 <= 20) {
            Bocek c = new_Bocek();
            c->canli->x = x;
            c->canli->y = y;
            c->canli->icerdeki_deger = num1;
            habitat->konumlar[i] = c; 
            habitat->real_char_dizi[i] = *(c->canli->gorunum(c));
        }
        else if(num1 >= 21 && num1 <= 50) {
            Sinek s = new_Sinek();
            s->bocek->canli->x = x;
            s->bocek->canli->y = y;
            s->bocek->canli->icerdeki_deger = num1;
            habitat->konumlar[i] = s; 
            habitat->real_char_dizi[i] = *(s->bocek->canli->gorunum(s));
        }
        else if(num1 >= 51 && num1 <= 99) {
            Pire p = new_Pire();
            p->bocek->canli->x = x;
            p->bocek->canli->y = y;
            p->bocek->canli->icerdeki_deger = num1;
            habitat->konumlar[i] = p; 
            habitat->real_char_dizi[i] = *(p->bocek->canli->gorunum(p));
        }  
        else if(num1 == 999) {
            y++; x = 0;
            habitat->y[p] = numbercountinoneline;
            numbercountinoneline = 0;
            p++;
        }
        if(num1 != 999) { 
            x++; i++;
            numbercountinoneline++;
        }
    }
    fclose(tempFile);
    remove("temp.txt");
}
void matris_yazdir(Habitat habitat) {
    Bitki bitki = new_Bitki();
    Bocek bocek = new_Bocek();
    Pire pire = new_Pire();
    Sinek sinek = new_Sinek();
    int i = 0;
    printf("\n--------------------------------------------------------------------\n");
    for(int im = 0; im < habitat->ncount; im++) {
        for(int j = 0; j < habitat->y[im]; j++) {
            if(habitat->real_char_dizi[i] == *(bitki->canli->gorunum(bitki))) {
                if((Bitki)habitat->konumlar[i] == NULL) printf("X "); 
                else {
                    printf("%s ", ((Bitki)habitat->konumlar[i])->canli->gorunum((Bitki)habitat->konumlar[i]));
                }   
            }
            else if(habitat->real_char_dizi[i] == *(bocek->canli->gorunum(bocek))) {
                if((Bocek)habitat->konumlar[i] == NULL) printf("X ");
                else {
                    printf("%s ", ((Bocek)habitat->konumlar[i])->canli->gorunum((Bocek)habitat->konumlar[i]));
                }
            }
            else if(habitat->real_char_dizi[i] == *(pire->bocek->canli->gorunum(pire))) {
                if((Pire)habitat->konumlar[i] == NULL) printf("X ");
                else {
                    printf("%s ", ((Pire)habitat->konumlar[i])->bocek->canli->gorunum((Pire)habitat->konumlar[i]));
                }
            }
            else if(habitat->real_char_dizi[i] == *(sinek->bocek->canli->gorunum(sinek))) {
                if((Sinek)habitat->konumlar[i] == NULL) printf("X ");
                else {
                    printf("%s ", ((Sinek)habitat->konumlar[i])->bocek->canli->gorunum((Sinek)habitat->konumlar[i]));
                }
            }
            i++;
        } 
        printf("\n");
    }
    printf("\n--------------------------------------------------------------------\n");
    bitki->delete_bitki(bitki);
    bocek->delete_bocek(bocek);
    sinek->delete_sinek(sinek);
    pire->delete_pire(pire);
}
void habitat_delete1(Habitat habitat) {
    free(habitat->y);
    free(habitat->real_char_dizi);
    free(habitat->konumlar);
    free(habitat);
}