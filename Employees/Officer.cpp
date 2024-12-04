/**
 * @file Officer.cpp
 * @author Dylan Hutson
 * @date 2024-12-03
 * @brief functions for the Officer class
 * 
 * A type of employee that has different data
 */

#include "Officer.h"
#include <iostream>

using namespace std;


/**
 * constructor and sets the evilness to 300
 *
 * @pre none
 * @post none
 * 
 */
Officer::Officer() {
  evilness = 500;
}


/**
 * copy constructor that assigns data passed in
 *
 * @param int ID ID number
 * @param int years years worked
 * @param double hourlyRate wage
 * @param float hoursWorked time worked
 * @param double evilness how evil they are
 * @pre none
 * @post assigns new data
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * prints the Employee subclass data and its evilness after
 *
 * @pre needs a coressponding employee class
 * @return void prints out their data
 * @post none
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * returns their amount payed based off hours worked and rate and evilness
 *
 * @pre needs nondefault hourly rate
 * @return double paycheck
 * @post none
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
