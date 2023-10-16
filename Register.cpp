#include "Register.h"
#include "Date.h"
#include "DateActivityPair.h"
#include "pdcurses.h"

Register::Register() {}

void Register::addActivity(const Date& date, const Activity& activity) {
    DateActivityPair pair= DateActivityPair(date, activity);
    activities.push_back(pair);
}

void Register::removeActivity(const Date& date, int index) {
    if (index >= 0 && index < activities.size()) {
        for (auto it = activities.begin(); it != activities.end(); ++it) {
            if ((*it).date.day == date.day && (*it).date.month == date.month &&
                (*it).date.year == date.year) {
                activities.erase(it);
                return;
            }
        }
    }
}

void Register::displayActivities(const Date& date) const {
    WINDOW* win = newwin(20, 80, 0, 0); // Crea una nuova finestra ncurses
    box(win, 0, 0);
    mvwprintw(win, 1, 1, "Attivtà per %02d/%02d/%04d:\n\n", date.day, date.month, date.year);

    bool found = false;
    int row = 3;

    for (size_t i = 0; i < activities.size(); ++i) {
        if (activities[i].date.day == date.day && activities[i].date.month == date.month &&
            activities[i].date.year == date.year) {
            found = true;
            mvwprintw(win, row, 1, "Activity %zu:", i + 1);
            activities[i].activity.printDetailsToWindow(win, row + 1); // Stampa i dettagli nella finestra
            row += 4;
        }
    }

    if (!found) {
        mvwprintw(win, row, 1, "No activities found for %02d/%02d/%04d", date.day, date.month, date.year);
    }

    wrefresh(win);
    wgetch(win);
    delwin(win);
}
