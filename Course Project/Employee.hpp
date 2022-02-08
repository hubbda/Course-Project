//
//  Employee.hpp
//  Course Project
//
//  Created by Devon Hubbard on 11/1/21.
//  I certify that this submission is my own original work

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include "Person.hpp"
#include "Date.hpp"
#include <string>

using namespace std;

// Task C ------------------------------
class Employee : public Person, public Date {
private:
    double salary;
    Date dob;
public:
    void setSalary(double sal);
    void setDOB(int yr, int mn, int d);
    
    double getSalary();
    Date getDOB();
    
    void print();
    
    Employee();
    Employee(string fName, string lName, int yr, int mn, int d, double sal);
    
    bool equals(const Employee& other) const;
};

#endif /* Employee_hpp */
