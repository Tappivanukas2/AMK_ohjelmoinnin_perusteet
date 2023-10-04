#include <stdio.h>

int tehtava1_1(int luku){
    int looppi = 0;
    while(looppi < 5) {
        printf("%d\n", luku);
        looppi++;
    }
    return 0;
}
int tehtava1_2(int luku) {
    int looppi = 0;
    while(looppi < 5){
        printf("%d ", luku);
        looppi++;
    }
    return 0;
}
int tehtava2_1() {
    char nimi[100];
    int tulostus;
    printf("Anna nimi: ");
    scanf_s("%s", &nimi);
    printf("Anna numero montako kertaa tulostus: ");
    scanf_s("%d", &tulostus);
    int looppi = 0;
    while(looppi < tulostus){
        printf("%s\n", &nimi);
        looppi++;
    }
    return 0;
}
int tehtava2_2() {
    char nimi[100];
    int tulostus;
    printf("Anna nimi: ");
    scanf_s("%s", &nimi);
    printf("Anna numero montako kertaa tulostus: ");
    scanf_s("%d", &tulostus);
    int looppi = 0;
    do {
        if(tulostus > 0) {
            printf("%s\n", nimi);
        }
        looppi++;
    } while (looppi < tulostus);
    return 0;
}
int tehtava2_3() {
    char nimi[100];
    int tulostus;
    printf("Anna nimi: ");
    scanf_s("%s", &nimi);
    printf("Anna numero montako kertaa tulostus: ");
    scanf_s("%d", &tulostus);
    for (int looppi = 0; looppi < tulostus; looppi++) {
        printf("%s\n", nimi);
    }
    return 0;
}
int tehtava3() {
    int salanro;
    printf("Anna salanro: ");
    scanf_s("%d", &salanro);
    while (salanro != 17) {
        printf("\nAnna salanro uudestaan: ");
        scanf_s("%d", &salanro);
        if (salanro == 17) {
            break;
        }
    }
    printf("\nValitsit nron oikein.");
    return 0;
}
int tehtava4(){
    int kerrottava;
    int kerroin = 1;
    printf("Anna kerrottava kokonaislukuluku: ");
    scanf_s("%d", &kerrottava);
    while (kerroin <= 10) {
        printf("\n%d", kerrottava * kerroin);
        kerroin++;
    }
    return 0;
}
int tehtava5(){
    int integer;
    int tulos = 0;
    int lisays = 2;
    printf("Anna kokonaisluku: ");
    scanf_s("%d", &integer);
    if (integer == 8) {
        return 0;
    }
    for (int luku = 1; luku <= integer; luku++) {
        int division = integer % 2;
        if (division == 0) {
            tulos = integer + lisays * 2;
            lisays = lisays + 2;
        }
    }
    printf("\n%d\n", tulos);
    return 0;
}
int tehtava6(){
    int tehtava = 0;
    while (tehtava != 1 || tehtava == 2) {
        printf("Anna numero, 1 kehan pituus, 2 ympyran kehan pituus tai 9 lopetus: ");
        scanf_s("%d", &tehtava);
        if (tehtava == 1) {
            printf("Valittu nelion kehan pituus");
            return 0;
        }
        else if (tehtava == 2){
            printf("Valittu ympyran kehan pituus.");
            return 0;
        }
        else if (tehtava == 9) {
            printf("\nlopetus\n");
            return 0;
        }
    }
    return 0;
}

int main()
{
    printf("tehtava 1_1:\n");
    tehtava1_1(100);
    printf("\ntehtava 1_2:\n");
    tehtava1_2(100);
    printf("\ntehtava 2_1 (while loop):\n");
    tehtava2_1();
    printf("\ntehtava 2_2 (do-while loop):\n");
    tehtava2_2();
    printf("\ntehtava 2_3 (for loop):\n");
    tehtava2_3();
    printf("\ntehtava 3:\n");
    tehtava3();
    printf("\ntehtava 4:\n");
    tehtava4();
    printf("\ntehtava 5:\n");
    tehtava5();
    printf("\ntehtava 6:\n");
    tehtava6();
    return 0;
}
