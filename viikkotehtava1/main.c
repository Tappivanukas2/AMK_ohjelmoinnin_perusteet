#include <stdio.h>

/*käsky esiprosessorille input/output kirjasto */
/*vk tehtävät 1 tehtävä 1:
kokonaisluvun määrittely = int x;
liukuluvun määrittely = float x; | double x;
merkkitietona määrittely = char x;*/

float cel_to_fah_muunnos(float celsius){ /* tehtävä 2*/
    return (celsius * 9 / 5 + 32);
}

float kolmion_ala(float kanta, float korkeus) { /* tehtava 3*/
    return kanta * korkeus / 2;;
}

int main()/*pääohjelma*/
{
    // tehtava 2
    float celsius, aste;
    printf("Anna celsius luku: "); //taa ei toimi viela koska scanf ei suostu jostain syysta!
    scanf_s("%f", &celsius);
    aste = cel_to_fah_muunnos(celsius);
    printf("\nAntamasi lampotila %0.2f on %0.2f Fahrenheit asteina.\n \n", celsius, aste);

    // tehtava 3
    float pinta_ala, kanta = 7, korkeus = 4;
    pinta_ala = kolmion_ala(kanta, korkeus);
    printf("Kun kolmion kanta on %0.2fm ja korkeus %0.2fm, on kolmion ala %0.2fm.\n \n", kanta, korkeus, pinta_ala);

    // tehtava 4
    int integer1, integer2;
    printf("Anna kaksi kokonaislukua: ");
    scanf_s("%d %d", &integer1, &integer2);
    printf("\nSyotetyt luvut olivat %d ja %d.\n", integer1, integer2);
    printf("Lukujen summa on %d.\n", integer1 + integer2);
    printf("Lukujen erotus on %d.\n", integer1 - integer2);
    printf("Lukujen tulo on %d.\n", integer1 * integer2);
    float floatinteger1 = integer1;
    float floatinteger2 = integer2;
    printf("Lukujen osamaara on %0.2f.\n\n", floatinteger1 / floatinteger2);

    // tehtava 5
    int numeroarray[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("Taulukon 1. rivin 3. luku on %d\n", numeroarray[0][2]);
    printf("Taulukon 2. rivin 2. luku on %d\n", numeroarray[1][1]);
    printf("Taulukon 3. rivin 1. luku on %d\n", numeroarray[2][0]);
    return 0;
}
