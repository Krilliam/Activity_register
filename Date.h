#ifndef ACTIVITYREGISTER_DATE_H
#define ACTIVITYREGISTER_DATE_H

class Date {

    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }

public:
    int day;
    int year;
    int month;

    Date();
    Date(int day, int month, int year);
};


#endif //ACTIVITYREGISTER_DATE_H
