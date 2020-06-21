#include <iostream>
#include "Department.h"
#include "Employee.h"
#include "Company.h"
using namespace std;

int getOption()
{
    cout << "Please select option from the following options" << endl;
    cout << "Option 1 to add department" << endl;
    cout << "Option 2 to add employee" << endl;
    cout << "Option 3 to change department of employee" << endl;
    cout << "Option 4 to print report of departments" << endl;
    cout << "Option 5 to close the program" << endl;
    int option;
    cin >> option;
    return option;
}

int main()
{
    Company company;
    while (true)
    {
        int option = getOption();
        switch (option)
        {
        case 1:
            //Add Department
            company.addDepartment();
            break;
        case 2:
            //Add Employee
            company.addEmployee();
            break;
        case 3:
            //Change Department of employee
            company.changeDepartmentOfEmployee();
            break;
        case 4:
            //Print Report of departments and Employees
            company.printReport();
            break;
        case 5:
            //Close Program
            return 0;
            break;
        default:
            cout << "Sorry we didn't understand your choice" << endl;
        }
    }
    return 0;
}