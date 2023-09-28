#ifndef ACTIVITYREGISTER_REGISTER_H
#define ACTIVITYREGISTER_REGISTER_H

// Register.h
#pragma once
#include <vector>
#include "Date.h"
#include "Activity.h"

class Register {
public:
    Register();
    void addActivity(const Date& date, const Activity& activity);
    void removeActivity(const Date& date, int index);
    void displayActivities(const Date& date) const;

private:
    struct DateActivityPair {
        DateActivityPair();

        Date date;
        Activity activity;
    };

    std::vector<DateActivityPair> activities;
};



#endif //ACTIVITYREGISTER_REGISTER_H
