
#include "Main.h"
#include <iostream>
#include "Date.h"
#include "Activity.h"
#include "Register.h"

int main() {
    Register activityRegister;
    int choice;

    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Aggiungi attività" << std::endl;
        std::cout << "2. Visualizza attività di una giornata" << std::endl;
        std::cout << "3. Esci" << std::endl;
        std::cout << "Scelta: ";
        std::cin >> choice;

        if (choice == 1) {
            int day, month, year, startHour, startMinute, endHour, endMinute;
            std::string description;

            std::cout << "Inserisci la data (gg mm aaaa): ";
            std::cin >> day >> month >> year;

            std::cout << "Inserisci l'ora di inizio (hh mm): ";
            std::cin >> startHour >> startMinute;

            std::cout << "Inserisci l'ora di fine (hh mm): ";
            std::cin >> endHour >> endMinute;

            std::cout << "Inserisci la descrizione: ";
            std::cin.ignore(); // Ignora newline residuo
            std::getline(std::cin, description);

            Date date(day, month, year);
            Activity activity(description, startHour, startMinute, endHour, endMinute);
            activityRegister.addActivity(date, activity);
        } else if (choice == 2) {
            int day, month, year;

            std::cout << "Inserisci la data da visualizzare (gg mm aaaa): ";
            std::cin >> day >> month >> year;
            Date date(day, month, year);

            activityRegister.displayActivities(date);
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Scelta non valida. Riprova." << std::endl;
        }
    }

    return 0;
}



