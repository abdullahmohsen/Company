#include "Department.h"

void Department::setName(string n)
{
	name = n;
}

string Department::getName()
{
	return name;
}

void Department::setDepartmentID(int id)
{
	departementID = id;
}

int Department::getDepartmentID()
{
	return departementID;
}

void Department::setManagerName(string m)
{
	managerName = m;
}

string Department::getManagerName()
{
	return managerName;
}
