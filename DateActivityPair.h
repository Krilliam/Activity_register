#ifndef ACTIVITYREGISTER_DATEACTIVITYPAIR_H
#define ACTIVITYREGISTER_DATEACTIVITYPAIR_H

#include "Date.h"
#include "Activity.h"

class DateActivityPair {
public:
    DateActivityPair();
    DateActivityPair(const Date& date, const Activity& activity);

    Date getDate() const;
    Activity getActivity() const;

    Date date;
    Activity activity;
};

#endif //ACTIVITYREGISTER_DATEACTIVITYPAIR_H
