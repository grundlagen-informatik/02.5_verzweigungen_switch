#include <stdio.h>

// Funktionsprototyp für Aufgabe 1a
void maxZweiZahlen();

// Funktionsprototyp für Aufgabe 1b
void maxDreiZahlen();

// Funktionsprototyp für Aufgabe 2
void tageMonat();

// Am Hauptteil muss nichts geändert werden. Der Code kann in die zwei Funktionen geschrieben werden.
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
    } else if (aufgabe == 3) {
        tageMonat();
    } else {
        printf("Ungueltige Eingabe, Programm muss neu gestartet werden.\n");
    }
    return 0;
}

void maxZweiZahlen() {
    int zahl1;
    int zahl2;

    printf("Bitte gib zwei Zahlen ein: ");
    scanf_s("%d%d", &zahl1, &zahl2);

    if (zahl1 > zahl2) {
        printf("Das Maximum ist: %d", zahl1);
    } else if (zahl1 == zahl2) {
        printf("Die Zahlen %d und %d sind gleich gross.", zahl1, zahl2);
    } else {
        printf("Das Maximum ist: %d", zahl2);
    }

}

void maxDreiZahlen() {
    int zahl1;
    int zahl2;
    int zahl3;

    printf("Bitte gib drei Zahlen ein: ");
    scanf_s("%d%d%d", &zahl1, &zahl2, &zahl3);

    if (zahl1 > zahl2) {
        if (zahl1 > zahl3) {
            printf("Das Maximum ist: %d", zahl1);
        } else {
            printf("Das Maximum ist: %d", zahl3);
        }
    } else {
        if (zahl2 > zahl3) {
            printf("Das Maximum ist: %d", zahl2);
        } else {
            printf("Das Maximum ist: %d", zahl3);
        }
    }

}

void tageMonat() {
    int monat;

    printf("Bitte gib einen Monat mit einer Nummer ein(1-12): ");
    scanf("%d", &monat);

    switch (monat) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Tage");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Tage");
            break;

        case 2:
            printf("28/29 Tage");
            break;

        default:
            printf("Ungueltige Eingabe! Bitte gib eine Monatsnummer zwischen 1-12");
    }

}
