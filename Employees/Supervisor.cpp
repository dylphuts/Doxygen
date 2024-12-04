/**
 * @file Supervisor.cpp
 * @author Dylan Hutson
 * @date 2024-12-03
 * @brief class functions for the Supervisors that is based off an employee
 * 
 * Employee with different data
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;


/**
 * constructor that sets numSupervised to -1
 *
 * @pre none
 * @post none
 * 
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * makes a new employee as a base and sets the numSupervised
 *
 * @param int ID ID
 * @param int years years worked
 * @param double hourlyRate wage
 * @param float hoursWorked hours worked
 * @param int numSupervised people supervised
 * @pre needs data and Employee class
 * @post none
 * 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * prints the employee and the numSupervised
 *
 * @pre needs data/ Employee
 * @return void prints their data
 * @post none
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * determines amount paid based on wage, supervised, and hours worked
 *
 * @pre needs numSupervised and Employee
 * @return double their money earned
 * @post none
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
