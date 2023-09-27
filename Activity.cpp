#include "Activity.h"
#include <iostream>

Activity::Activity(const std::string& desc, int startHour, int startMinute, int endHour, int endMinute) {
    description = desc;
    this->startHour = startHour;
    this->startMinute = startMinute;
    this->endHour = endHour;
    this->endMinute = endMinute;
}

void Activity::printDetails() const {
    std::cout << "Description: " << description << std::endl;
    std::cout << "Start Time: " << startHour << ":" << startMinute << std::endl;
    std::cout << "End Time: " << endHour << ":" << endMinute << std::endl;
}