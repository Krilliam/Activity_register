#include "Activity.h"
#include "pdcurses.h"
#include "string"

Activity::Activity() {
    description="";
    startHour=0;
    startMinute=0;
    endHour=0;
    endMinute=0;
}
Activity::Activity(const std::string& desc, int startHour, int startMinute, int endHour, int endMinute) {
    description = desc;
    this->startHour = startHour;
    this->startMinute = startMinute;
    this->endHour = endHour;
    this->endMinute = endMinute;
}

void Activity::printDetailsToWindow(WINDOW* win, int row) const {
    mvwprintw(win, row, 1, "Description: %s", description.c_str());
    mvwprintw(win, row + 1, 1, "Start Time: %02d:%02d", startHour, startMinute);
    mvwprintw(win, row + 2, 1, "End Time: %02d:%02d", endHour, endMinute);
}