#include <stdio.h>
#include <string.h>

extern int a; // Punkte Spieler
extern int b; // Punkte Bot

void final_score () {
    if (a==b) {
        printf ("\nUnentschieden!");
        printf ("\n( ^_^）o自自o（^_^ )");
        
    } else if (a>b) {
        printf ("\nDu hast gewonnen!\n");
        printf ("\n(^_^)");
        
    } else if (b>a) {
        printf ("\nDu hast verloren!\n");
        printf ("\nლ(ಠ益ಠ)ლ");
        
    };
};
