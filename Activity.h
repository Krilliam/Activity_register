
#ifndef ACTIVITYREGISTER_ACTIVITY_H
#define ACTIVITYREGISTER_ACTIVITY_H
#include <string>
#include <pdcurses.h>

class Activity {
public:
    Activity();
    Activity(const std::string& desc, int startHour, int startMinute, int endHour, int endMinute);
    void printDetailsToWindow(WINDOW*, int) const;

private:
    std::string description;
    int startHour;
    int startMinute;
    int endHour;
    int endMinute;
};


#endif
