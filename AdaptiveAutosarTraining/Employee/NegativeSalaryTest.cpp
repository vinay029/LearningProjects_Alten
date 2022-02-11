#include "EmployeeBase.h"

/* Test to determine if a negative value is given as input to the salary class, it is interpreted to 0 */
int main() {
    /* Create an Employee object */
    Employee testEmployee;
    /* set salary as negative */
    testEmployee.setMonthlySalary(-5000);
    testEmployee.getMonthlySalary() == 0 ? cout<< "Negative Salary value is set to 0" <<endl : cout<< "Negative Salary value is not set to 0" <<endl;
    return 0;
};