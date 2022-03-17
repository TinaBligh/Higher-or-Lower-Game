#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

extern int a; // Punkte Spieler
extern int b; // Punkte Bot

void game () {
    char antwort[8]; // Antwort

    // Zahlen generieren
    srand (time(NULL));
    int z1 = (rand() % 10) +1;
    int z2 = (rand() % 10) +1;
    
    //z2 darf nicht z1 sein
    while (z1 == z2) {
        int z2 = (rand() % 10) +1;
    };
    
    printf ("\nDie erste Zahl ist: %d\n", z1);
    
    // Antwort und Punktezähler
    do {
    	printf ("Ist die zweite Zahl größer oder kleiner als %d? ", z1);
    	scanf ("%s", antwort);
    	if (strcmp(antwort, "kleiner") != 0 && strcmp(antwort, "größer") != 0) {
			printf ("Ungültige Eingabe!\n");
		};

    } while (strcmp(antwort, "kleiner") != 0 && strcmp(antwort, "größer") != 0);
   
    if (z2>z1 && strcmp(antwort, "größer") == 0) {
        a++;
        printf ("Richtig, die zweite Zahl ist: ");
    } else if (z2<z1 && strcmp(antwort, "kleiner") ==0) {
        a++;
        printf ("Richtig, die zweite Zahl ist: ");
    } else if (z2>z1 && strcmp(antwort, "kleiner") == 0) {
        b++;
        printf ("Falsch, die zweite Zahl ist: ");
    } else if (z2<z1 && strcmp(antwort, "größer") == 0) {
        b++;
        printf ("Falsch, die zweite Zahl ist: ");
    };
    
    printf ("%d\n", z2);
};