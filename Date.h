#ifndef ACTIVITYREGISTER_DATE_H
#define ACTIVITYREGISTER_DATE_H

struct Date {
    int day;
    int month;
    int year;

    Date(int day, int month, int year);

    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }
};


#endif //ACTIVITYREGISTER_DATE_H
