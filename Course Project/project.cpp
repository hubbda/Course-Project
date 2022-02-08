//
//  main.cpp
//  Course Project
//
//  Created by Devon Hubbard on 11/1/21.
//  I certify that this submission is my own original work

#include "Employee.hpp"
#include "Person.hpp"
#include "Date.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

double getAvgSalary(Employee list[], int size);
int getYoungest(Employee list[], int size);
int getOldest(Employee list[], int size);

int main(int argc, const char * argv[]) {
    
    // Task D.1 ------------------------------
    
    ifstream infile;
    infile.open("hrdata.txt"); // Opens file

    if (!infile) {
        cout << "Could not open file\n"; // Error message if file doesn't open and/or work
        return 1;
    }

    string num;
    getline(infile, num); // Removes first line and saves number of employees
    
    int numOfEmp = stoi(num); // Size of array is assigned to number of employees in file
    string fname[numOfEmp];
    string lname[numOfEmp];
    int yyyy[numOfEmp];
    int mm[numOfEmp];
    int dd[numOfEmp];
    double sal[numOfEmp];
    //Employee employees[size]; // Initializes normal array
    Employee *employees = new Employee[numOfEmp]; // Initializes dynamic array
    
    int employee = 0;
    while (employee < numOfEmp && infile >> fname[employee] >> lname[employee] >> yyyy[employee] >> mm[employee] >> dd[employee] >> sal[employee]) { // While loop reads file for employee data and initializes employee objects into an array (employees[])
        employees[employee].setFName(fname[employee]);
        employees[employee].setLName(lname[employee]);
        employees[employee].setDOB(yyyy[employee], mm[employee], dd[employee]);
        employees[employee].setSalary(sal[employee]);
        employee++;
    }
    
    /* for loop for initializing employee objects into an array
    for (int i = 0; i < count; i++) {
        employees[i].setFName(fname[i]);
        employees[i].setLName(lname[i]);
        employees[i].setDOB(yyyy[i], mm[i], dd[i]);
        employees[i].setSalary(sal[i]);
    }
    */
    
    cout << "First Name" << "     Last Name" << "     Date of Birth" << "     Salary" << endl;
    for (int i = 0; i < employee; i++) { // Print employees array
        employees[i].print();
    }
    
    // Task D.2 ------------------------------
    cout << "\nThe average salary is $" << getAvgSalary(employees, numOfEmp) << endl; // Calls getAvgSalary function
    
    // Task D.3 Extra Credit ------------------------------
    cout << "The oldest employee was born in " << getOldest(employees, numOfEmp) << endl; // Calls getOldest function
    cout << "The youngest employee was born in " << getYoungest(employees, numOfEmp) << endl; // Calls getYoungest function
    
    return 0;
}

double getAvgSalary(Employee list[], int size) { // Function to get average salary of employees
    double sum = 0;
    double avg = 0;
    for (int i = 0; i < size; i++) {
        sum += list[i].getSalary();
        avg = sum / size;
    }
    return avg;
}

int getYoungest(Employee list[], int size) { // Function to find the youngest employee by birth year
    int youngest = list[0].getDOB().getYear();
    for (int i = 0; i < size; i++) {
        if (list[i].getDOB().getYear() < youngest) {
            youngest = list[i].getDOB().getYear();
        }
    }
    return youngest;
}

int getOldest(Employee list[], int size) { // Function to find the oldest employee by birth year
    int oldest = list[0].getDOB().getYear();
    for (int i = 0; i < size; i++) {
        if (list[i].getDOB().getYear() > oldest) {
            oldest = list[i].getDOB().getYear();
        }
    }
    return oldest;
}
