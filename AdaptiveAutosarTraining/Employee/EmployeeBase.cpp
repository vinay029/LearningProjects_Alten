#include "EmployeeBase.h"

void Employee::setMonthlySalary(int salary) {
    /* If monthly salary negative set it to 0 */
      salary < 0 ? monthlySalary = 0 : monthlySalary = salary;
    };

 int Employee::getMonthlySalary() {
    return monthlySalary;
};

Employee::Employee(){
    /* Initialize to a default name */
    firstName ="Max";
    lastName = "Mustermann";
    monthlySalary = 0;
};