
# add the necessary files needed for compiling the Employee main function 
add_executable(Employee EmployeeBase.cpp EmployeeMain.cpp)

# enable ctest to test the negative salary scenario and add test and a test case using set_tests_properties
enable_testing()
add_executable(NegativeSalary NegativeSalaryTest.cpp EmployeeBase.cpp)
add_test(NegativeSalary NegativeSalary)
set_tests_properties(NegativeSalary PROPERTIES PASS_REGULAR_EXPRESSION "Negative Salary value is set to 0")

# enable ctest to test that the default name is set by the constructor and add test and a test case using set_tests_properties
add_executable(FirstNameLastName FirstNameLastNameTest.cpp EmployeeBase.cpp)
add_test(FirstNameLastName FirstNameLastName)
set_tests_properties(FirstNameLastName PROPERTIES PASS_REGULAR_EXPRESSION "Employee Default Name : Max Mustermann")