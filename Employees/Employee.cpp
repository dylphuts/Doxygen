/**
 * @file Employee.cpp
 * @author Dylan Hutson
 * @date 2024-12-03
 * @brief functions for the employee class
 * 
 * An employee has a certain amount of priorities compared to others
 */

#include "Employee.h"
#include <iostream>

using namespace std;


/**
 * Employee constructor
 *
 * @pre none
 * @post makes a new Employeeby setting everything equal to -1
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}


/**
 * a copy constructor that makes a new Employee and based on the values passed it assigns them
 *
 * @param int ID ID number
 * @param int years years they've worked
 * @param double hourlyRate how much they earn
 * @param float hoursWorked how long theyve worked
 * @pre nonw
 * @post makes and assigns a new employee
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}


/**
 * prints all this employee's data
 *
 * @pre needs data to print
 * @return void prints employee data
 * @post none
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}


/**
 * when called the employee's years  increases and gets a pay raise. prints them
 *
 * @pre needs data to print or increase
 * @return void gives a congragulatory message and shows their new data
 * @post none
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}


/**
 * 
 * Description: returns a double showing what the employee would make based on their wage and hours worked
 * @pre needs non default data
 * @return double total money they have made
 * @post none
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

