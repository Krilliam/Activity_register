#ifndef ACTIVITYREGISTER_REGISTER_H
#define ACTIVITYREGISTER_REGISTER_H
#include <vector>
#include "Date.h"
#include "Activity.h"
#include "DateActivityPair.h"

class Register {
public:
    Register();
    void addActivity(const Date& date, const Activity& activity);
    void removeActivity(const Date& date, int index);
    void displayActivities(const Date& date) const;

private:
    std::vector<DateActivityPair> activities;
};


#endif //ACTIVITYREGISTER_REGISTER_H
