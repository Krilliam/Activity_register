#include "DateActivityPair.h"
#include "Date.h"
#include "Activity.h"

DateActivityPair::DateActivityPair() {}

DateActivityPair::DateActivityPair(const Date& date, const Activity& activity) {
    this->date = date;
    this->activity = activity;
}

Date DateActivityPair::getDate() const {
    return date;
}

Activity DateActivityPair::getActivity() const {
    return activity;
}
