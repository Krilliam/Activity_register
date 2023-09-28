#include "Register.h"
#include "Date.h"
#include <iostream>
#include <iomanip>

Register::Register() {}

void Register::addActivity(const Date& date, const Activity& activity) {
    DateActivityPair pair;
    pair.date = date;
    pair.activity = activity;
    activities.push_back(pair);
}

void Register::removeActivity(const Date& date, int index) {
    for (auto it = activities.begin(); it != activities.end(); ++it) {
        if ((*it).date.day == date.day && (*it).date.month == date.month &&
            (*it).date.year == date.year && index >= 0 && index < activities.size()) {
            activities.erase(it);
            return;
        }
    }
}

void Register::displayActivities(const Date& date) const {
    bool found = false;
    std::cout << "Activities for " << std::setw(2) << std::setfill('0') << date.day << "/"
              << std::setw(2) << std::setfill('0') << date.month << "/" << date.year << ":\n\n";

    for (size_t i = 0; i < activities.size(); ++i) {
        if (activities[i].date.day == date.day && activities[i].date.month == date.month &&
            activities[i].date.year == date.year) {
            found = true;
            std::cout << "Activity " << i + 1 << ":\n";
            activities[i].activity.printDetails();
            std::cout << std::endl;
        }
    }

    if (!found) {
        std::cout << "No activities found for " << std::setw(2) << std::setfill('0') << date.day << "/"
                  << std::setw(2) << std::setfill('0') << date.month << "/" << date.year << std::endl;
    }
}
