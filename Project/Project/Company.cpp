#include "Company.h"

//Constructor - Initialization List
Company::Company() : numberOfEmployees(0), numberOfDepartments(0)
{
}

void Company::addDepartment()
{
	int departmentID;
	string name, managerName;

	////Takes data of department
	cout << "Please enter the department id" << endl;
	cin >> departmentID;

	cout << "Please enter the department name" << endl;
	cin >> name;

	cout << "Please enter the manager name" << endl;
	cin >> managerName;
	
	//Create department Object
	Department department;

	////Puts the data of department in department object 
	department.setDepartmentID(departmentID);
	department.setName(name);
	department.setManagerName(managerName);

	//Puts the values or data of object in Array of departments
	departments[numberOfDepartments] = department;
	numberOfDepartments++;
}

void Company::addEmployee()
{
	string name;
	float salary;
	int departmentID, age;

	//Takes data of employee
	cout << "Please enter the employee name" << endl;
	cin >> name;

	cout << "Please enter the employee age" << endl;
	cin >> age;

	cout << "Please enter the employee salary" << endl;
	cin >> salary;

	cout << "Please enter the department id" << endl;
	cin >> departmentID;

	//Create employee Object
	Employee employee;

	//Puts the data of employee in employee object 
	employee.setName(name);
	employee.setAge(age);
	employee.setSalary(salary);
	employee.setDepartmentID(departmentID);

	//Puts the values or data of object in Array of employees
	employees[numberOfEmployees] = employee;
	numberOfEmployees++;
}

void Company::changeDepartmentOfEmployee()
{
	string employeeName;
	int departmentID;

	//Take data of employee name & department ID
	cout << "Please enter the employee name" << endl;
	cin >> employeeName;

	cout << "Please enter the department id" << endl;
	cin >> departmentID;

	//Loop on all employees to get the employee I need it and change the department of him/her
	for (int i = 0; i < numberOfEmployees; i++)
	{
		if (employees[i].getName() == employeeName)
		{
			employees[i].setDepartmentID(departmentID);
			break;
		}
	}
}

void Company::printReport()
{
	for (int i = 0; i < numberOfDepartments; i++)
	{
		Department currentDepartment = departments[i];
		int employeesCount = 0;
		for (int j = 0; j < numberOfEmployees; j++)
		{
			if (employees[j].getDepartmentID() == currentDepartment.getDepartmentID())
			{
				employeesCount++;
			}
		}
		if (employeesCount <= 1)
		{
			cout << currentDepartment.getName() << " has " << employeesCount << " employee." << endl;
		}
		else
		{
			cout << currentDepartment.getName() << " have " << employeesCount << " employees." << endl;
		}
	}
}
