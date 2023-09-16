#include <stdio.h>

// Funktionsprototyp für Aufgabe 1a
void maxZweiZahlen();

// Funktionsprototyp für Aufgabe 1b
void maxDreiZahlen();

// Funktionsprototyp für Aufgabe 2
void tageMonat();

// Am Hauptteil muss nichts geändert werden. Der Code kann in die vier Funktionen geschrieben werden.
int main() {
    int aufgabe;

    printf("Fuer Maximum-Aufgabe mit zwei Zahlen druecke: 1\n"
           "Fuer Maximum-Aufgabe mit drei Zahlen druecke: 2\n"
           "Fuer Anzahl Tage im Monat druecke: 3\n");
    scanf("%d", &aufgabe);

    if (aufgabe == 1) {
        maxZweiZahlen();
    } else if (aufgabe == 2) {
        maxDreiZahlen();
    } else if (aufgabe == 3){
        tageMonat();
    } else {
        printf("Ungueltige Eingabe, Programm muss neu gestartet werden.\n");
    }
    return 0;
}

void maxZweiZahlen(){
    // Hier muss der Code für die Maximum-Aufgabe mit zwei Zahlen geschrieben werden.
}

void maxDreiZahlen(){
    // Hier muss der Code für die Maximum-Aufgabe mit drei Zahlen geschrieben werden.
}

void tageMonat(){
    // Hier muss der Code für die Anzahl Tage im Monat geschrieben werden.
}
