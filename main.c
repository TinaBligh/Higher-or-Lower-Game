#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void game();
void final_score();

int a = 0; // Punkte Spieler
int b = 0; // Punkte Bot
char runde[5]; // neue Runde

void main()
{
    char name[15]; // Spielername
    printf("Higher or Lower Game\n");
    printf ("\nAls erstes wird eine Zahl zwischen 1 und 10 zufällig ausgewählt.\n");
    printf ("Danach musst du raten, ob die zweite Zahl, ebenfalls zufällig zwischen 1 und 10, höher oder niedriger ist als die erste.\n");
    
    printf("\nGib deinen Namen ein: ");
    scanf ("%s", name);
    
    do { // fußgesteuerte Schleife
        game();
        
        // Punkteanzeige
        printf ("\n");
        printf ("------------------------\n");
        printf ("Punktestand\n");
        printf ("\n");
        printf ("%s: %d ", name, a);
        printf ("\tBot: %d\n", b);
        printf ("------------------------\n");
        
        // neue Runde
        do  {
            
            printf ("\nNoch eine Runde? <ja/nein> ");
            scanf ("%s", runde);
            if (strcmp(runde, "ja") != 0 && strcmp(runde, "nein") != 0) {
                printf("Ungültige Eingabe!");    
            }
        } while (strcmp(runde, "ja") != 0 && strcmp(runde, "nein") != 0);
        
    } while (strcmp(runde, "ja") == 0); // Schleifen-Ende
    
    if (strcmp(runde, "nein") == 0) {
        printf ("\nSpiel beendet!\n");
        final_score();
        
    };
    
}



