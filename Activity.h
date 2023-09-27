
#ifndef ACTIVITYREGISTER_ACTIVITY_H
#define ACTIVITYREGISTER_ACTIVITY_H
#include <string>

class Activity {
public:
    Activity(const std::string& desc, int startHour, int startMinute, int endHour, int endMinute);
    void printDetails() const;

private:
    std::string description;
    int startHour;
    int startMinute;
    int endHour;
    int endMinute;
};


#endif
