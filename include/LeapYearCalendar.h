#ifndef PARAMETERIZEDTESTEXAMPLESCPP_LEAPYEARCALENDAR_H
#define PARAMETERIZEDTESTEXAMPLESCPP_LEAPYEARCALENDAR_H

class LeapYearCalendar {
public:
    bool isLeap(int year);
    bool isDivisibleBy4(int year);
    bool isDivisibleBy100(int year);
    bool isDivisibleBy400(int year);
};

#endif //PARAMETERIZEDTESTEXAMPLESCPP_LEAPYEARCALENDAR_H
