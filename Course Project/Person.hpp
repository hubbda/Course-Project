//
//  Person.hpp
//  Course Project
//
//  Created by Devon Hubbard on 11/1/21.
//  I certify that this submission is my own original work

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>

using namespace std;

// Task B ------------------------------
class Person {
private:
    string firstName;
    string lastName;
    
public:
    void setFName(string fName);
    void setLName(string lName);
    
    string getFName();
    string getLName();
    
    void print();
    
    Person();
    Person(string fName, string lName);
    
    bool equals(const Person& other) const;
};

#endif /* Person_hpp */
