#include <stdio.h>
#include <stdlib.h>
//tehtava1
void tulosta() {
    printf("Hei maailma!\n");
}
//tehtava2
int lue() {
    int luku;
    printf("Anna kokonaisluku: ", &luku);
    scanf_s("%d", &luku);
    return luku;
}
//tehtava3
void tulostus(int luku) {
    printf("%d\n", luku);
}
//tehtava4
float float_kertoma() {
    float floatti; float luku;
    printf("Anna floatti: ");
    scanf_s("%f", &luku);
    floatti = luku * 3;
    return floatti;
}
//tehtava5
int vertaile() {
    int luku1; int luku2;
    printf("Anna kaksi kokonaislukua valilyonnilla erotettuna: ");
    scanf_s("%d", &luku1);
    scanf_s("%d", &luku2);
    if (luku1 > luku2) {
        printf("%d, %d\n", luku1, luku2);
    }
    else {
        printf("%d, %d\n", luku2, luku1);
    }
}
//tehtava6
float nelioLasku() {
    float sivu;
    printf("Anna sivun pituus: ");
    scanf_s("%f", &sivu);
    float keha = sivu * 4;
    return keha;
}
float ympyraLasku() {
    float sade;
    printf("Anna sade: ");
    scanf_s("%f", &sade);
    float keha = 2 * 3.14 * sade;
    return keha;
}
void laskut() {
    int valinta = 0; float keha;
    while (valinta != 9) {
        printf("1. nelion kehan pituus.\n2. Ympyran kehan pituus.\n9. Lopetus.\nValinta: ");
        scanf_s("%d", &valinta);
        if (valinta == 1) {
            keha = nelioLasku();
            printf("Nelion kehan pituus on %.02f\n", keha);
        }
        else if (valinta == 2) {
            keha = ympyraLasku();
            printf("Ympyran kehan pituus on %.02f\n", keha);
        }
        else if (valinta == 9) {
            break;
        }
    }
}
//tehtava7
void tulostamerkkijono(char merkkijono[]) {
    for (int i = 0; i < 20; i++) {
        printf("%c", merkkijono[i]);
        if (merkkijono[i] == 0) {
            printf("\n");
            break;
        }
    }
}
//tehtava8
void str_convert_summa() {
    char taulukko[20][20]; char kokonaisluku[5]; char floatti[5]; double summa; double var1; double var2;
    printf("Anna kokonaisluku: ");
    scanf_s("%s", &taulukko[0]);
    printf("%s\n", &taulukko[0]);
    printf("Anna desimaaliluku: ");
    scanf_s("%s", &taulukko[1]);
    var1 = atof(taulukko[0]); var2 = atof(taulukko[1]);
    summa = var1 + var2;
    printf("Summa on: %.02f", summa);
}
int main()
{
    //teht1
    tulosta();
    //teht2
    int luku; float floatti;
    luku = lue();
    printf("%d\n", luku);
    //teht3
    tulostus(luku);
    //teht4
    floatti = float_kertoma();
    printf("%.02f\n", floatti);
    //teht6
    vertaile();
    //teht6
    laskut();
    //teht7
    char merkkijono[20];
    printf("Kirjoita merkkijono (max 20 merkkia): ");
    scanf_s("%s", &merkkijono);
    tulostamerkkijono(merkkijono);

    //teht8
    str_convert_summa();
    return 0;
}
