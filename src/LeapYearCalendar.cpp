#include <../include/LeapYearCalendar.h>

bool LeapYearCalendar::isLeap(int year){
    return isDivisibleBy4(year) and (!isDivisibleBy100(year) or isDivisibleBy400(year));
}

bool LeapYearCalendar::isDivisibleBy4(int year){
    return year % 4 == 0;
}

bool LeapYearCalendar::isDivisibleBy100(int year){
    return year % 100 == 0;
}

bool LeapYearCalendar::isDivisibleBy400(int year){
    return year % 400 == 0;
}
