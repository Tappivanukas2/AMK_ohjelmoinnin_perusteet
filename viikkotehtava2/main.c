#include <stdio.h>

int main()
{

    int integer1, integer2, integer3;
    // Tehtava1
    printf("Anna kokonaisluku: ");
    scanf_s("%d", &integer1);
    if (integer1 < 10) {
        printf("Annoit luvun joka on pienempi kuin 10.\n");
        }
    // Tehtava2
    printf("Anna kaksi kokonaislukua: ");
    scanf_s("%d %d", &integer2, &integer3);
    printf("%d, %d\n", integer2, integer3);
    if (integer2 > integer3) {
        printf("%d\n", integer2);
    }
    else {
        printf("%d\n", integer3);
    }

    // Tehtava3
    char *paivat[7] = {"maanantai","tiistai","keskiviikko","torstai","perjantai","lauantai","sunnuntai"};
    int paivalaskin = 0, viikonpaiva, looppi_integer;
    printf("\nAnna viikonpaivan numero: ");
    scanf_s("%d\n", &viikonpaiva);
    if (viikonpaiva < 1) {
        printf("\nAnnoit sellaisen numeron, jolle ei ole viikonpaivaa.\n");
    }
    if (viikonpaiva > 7) {
        printf("\nAnnoit sellaisen numeron, jolle ei ole viikonpaivaa.\n");
    }
    for (looppi_integer = 1; looppi_integer < 8; looppi_integer++) {
        if (viikonpaiva == looppi_integer) {
            paivalaskin = viikonpaiva-1;
            printf("%s", paivat[paivalaskin]);
            paivalaskin++;

        }
    }

    // Tehtava4



    return 0;
}
