//
//  Person.cpp
//  Course Project
//
//  Created by Devon Hubbard on 11/1/21.
//  I certify that this submission is my own original work

#include "Person.hpp"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

// Task B ------------------------------
void Person::setFName(string fName) {
    firstName = fName;
}

void Person::setLName(string lName) {
    lastName = lName;
}

string Person::getFName() {
    return firstName;
}

string Person::getLName() {
    return lastName;
}

void Person::print() {
    cout << setw(15) << left << firstName << setw(15) << left << lastName;
}

Person::Person() {
    firstName = "None";
    lastName = "None";
}

Person::Person(string fName, string lName) {
    firstName = fName;
    lastName = lName;
}

bool Person::equals(const Person& other) const {
    if (firstName == other.firstName && lastName == other.lastName) {
        return true;
    } else {
        return  false;
    }
}
