#include "LeapYear.h"
#include <iostream>

bool LeapYear::isLeap(int year){
    // uncomment the following line to provoke test failures for input 1989
    // if (year == 1989) {return true;}
    return isDivisibleBy4(year) and (!isDivisibleBy100(year) or isDivisibleBy400(year));
}

bool LeapYear::isDivisibleBy4(int year){
    return year % 4 == 0;
}

bool LeapYear::isDivisibleBy100(int year){
    return year % 100 == 0;
}

bool LeapYear::isDivisibleBy400(int year){
    return year % 400 == 0;
}