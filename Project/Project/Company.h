#pragma once
#include "Department.h"
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

class Company
{
private:
	int numberOfEmployees, numberOfDepartments;
	
	//Make objects in array 
	Employee employees[100];
	Department departments[100];

public:
	Company();
	void addDepartment();
	void addEmployee();
	void changeDepartmentOfEmployee();
	void printReport();
};

