#include "EmployeeBase.h"

int main(){
    /* Create two objects of the Employee class */
    Employee Employee1;
    Employee Employee2;
     
    /* Set the first and last name of one of the employees and the other employee is taken from the constructor */
    Employee1.firstName = "Fernando";
    Employee1.lastName = "Torres";

    /* Set salary of both the employee objects */
    Employee1.setMonthlySalary(6000);    
    Employee2.setMonthlySalary(4000);


    cout << "Yearly salary of  " << Employee1.firstName <<" "<<Employee1.lastName << " is: " << Employee1.getMonthlySalary() * 12;
    cout << "\nYearly salary of " << Employee2.firstName <<" "<<Employee2.lastName << " is: " << Employee2.getMonthlySalary() * 12;
}