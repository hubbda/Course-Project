//
//  Employee.cpp
//  Course Project
//
//  Created by Devon Hubbard on 11/1/21.
//  I certify that this submission is my own original work

#include "Employee.hpp"
#include "Person.hpp"
#include "Date.hpp"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

// Task C ------------------------------
void Employee::setSalary(double sal) {
    if (sal > 0) {
        salary = sal;
    } else {
        salary = 0;
    }
}

void Employee::setDOB(int yr, int mn, int d) {
    dob.setDate(yr, mn, d);
}

double Employee::getSalary() {
    return salary;
}

Date Employee::getDOB() {
    return dob;
}

void Employee::print() {
    Person::print();
    dob.print();
    cout << setfill(' ') << setw(14) << fixed << setprecision(2) << right << salary << endl;
}

Employee::Employee() : Person(), Date() {
    salary = 0;
}

Employee::Employee(string fName, string lName, int yr, int mn, int d, double sal) {
    setFName(fName);
    setLName(lName);
    setDate(yr, mn, d);
    salary = sal;
}

bool Employee::equals(const Employee& other) const {
    Person::equals(other);
    Date::equals(other);
    if (salary == other.salary) {
        return  true;
    } else {
        return false;
    }
}
