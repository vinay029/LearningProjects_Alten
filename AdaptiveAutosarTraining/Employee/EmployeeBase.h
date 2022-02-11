#ifndef EMPLOYEEBASE_H
#define EMPLOYEEBASE_H
#include <iostream>
using namespace std;
class Employee {

public:
string firstName;
string lastName;
void setMonthlySalary(int salary);
int getMonthlySalary();
Employee();

/* Only accessible through the getter and setters */
private:
int monthlySalary;
};
#endif