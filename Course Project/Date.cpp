//
//  Date.cpp
//  Course Project
//
//  Created by Devon Hubbard on 11/1/21.
//  I certify that this submission is my own original work

#include "Date.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

//Task A ------------------------------

void Date::setDate(int yr, int mn, int d) {
    if (yr >= 1900 && yr <= 2020) {
        year = yr;
    } else {
        year = 2001;
    }
    
    if (mn >= 1 && mn <= 12) {
        month = mn;
    } else {
        month = 1;
        mn = 1;
    }
    
    if (mn == 1 || mn == 3 || mn == 5 || mn == 7 || mn == 8 || mn == 10 || mn == 12) {
        if (d >= 1 && d <= 31) {
            day = d;
        } else {
            day = 1;
        }
    } else if (mn == 4 || mn == 6 || mn == 9 || mn == 11) {
        if (d >= 1 && d <= 30) {
            day = d;
        } else {
            day = 1;
        }
    } else if (mn == 2) {
        if(d >= 1 && d <= 28) {
            day = d;
        } else {
            day = 1;
        }
    }
}

int Date::getYear() {
    return year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

void Date::print() {
    cout << setfill('0') << setw(2) << right << month << "-" << setw(2) << right << day << "-" << setw(4) << left << year;
}

Date::Date() {
    year = 2001;
    month = 1;
    day = 1;
}

Date::Date(const Date& other) {
    setDate(other.year, other.month, other.day);
}

bool Date::equals(const Date& other) const {
    if (year == other.year && month == other.month && day == other.day) {
        return true;
    } else {
        return false;
    }
}
