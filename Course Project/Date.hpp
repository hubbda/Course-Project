//
//  Date.hpp
//  Course Project
//
//  Created by Devon Hubbard on 11/1/21.
//  I certify that this submission is my own original work

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

// Task A ------------------------------
class Date {
private:
    int year;
    int month;
    int day;
public:
    void setDate(int yr, int mn, int d);
    
    int getYear();
    int getMonth();
    int getDay();
    
    void print();
    
    Date();
    
    Date(const Date& other);
    
    bool equals(const Date& other) const;
    
};

#endif /* Date_hpp */
