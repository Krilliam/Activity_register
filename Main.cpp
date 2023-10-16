
#include "string"
#include "Date.h"
#include "Activity.h"
#include "Register.h"
#include "pdcurses.h"

int main() {
    initscr(); // Inizializza la modalità ncurses
    keypad(stdscr, TRUE); // Abilita la tastiera speciale (freccette, F1, ecc.)

    Register activityRegister;
    int choice;

    while (true) {
        clear(); // Cancella lo schermo
        printw("Menu:\n");
        printw("1. Aggiungi attività\n");
        printw("2. Visualizza attività di una giornata\n");
        printw("3. Esci\n");
        printw("Scelta: ");
        refresh();

        scanw("%d", &choice);

        if (choice == 1) {
            int day, month, year, startHour, startMinute, endHour, endMinute;
            std::string description;

            clear();
            printw("Inserisci la data separata da spazi (gg mm aaaa): ");
            scanw("%d %d %d", &day, &month, &year);

            printw("Inserisci l'ora di inizio separata da spazi (hh mm): ");
            scanw("%d %d", &startHour, &startMinute);

            printw("Inserisci l'ora di fine separata da spazi (hh mm): ");
            scanw("%d %d", &endHour, &endMinute);

            printw("Inserisci la descrizione: ");
            refresh();
            std::string tempDescription;
            char tempChar;
            while ((tempChar = getch()) != '\n') {
                tempDescription.push_back(tempChar);
            }
            description = tempDescription;

            Date date(day, month, year);
            Activity activity(description, startHour, startMinute, endHour, endMinute);
            activityRegister.addActivity(date, activity);
        } else if (choice == 2) {
            int day, month, year;

            clear();
            printw("Inserisci la data da visualizzare (gg mm aaaa): ");
            scanw("%d %d %d", &day, &month, &year);
            Date date(day, month, year);

            activityRegister.displayActivities(date);
        } else if (choice == 3) {
            break;
        } else {
            clear();
            printw("Scelta non valida. Riprova.");
            refresh();
            getch();
        }
    }

    endwin(); // Termina la modalità ncurses
    return 0;
}

