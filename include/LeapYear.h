#pragma once

class LeapYear {
 public:
    bool isLeap(int year);
 private:
    bool isDivisibleBy4(int year);
    bool isDivisibleBy100(int year);
    bool isDivisibleBy400(int year);
};