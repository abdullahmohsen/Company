#pragma once
#include <string>
using namespace std;

class Department
{
private:
	string name, managerName;
	int departementID;

public:
	void setName(string n);
	string getName();

	void setDepartmentID(int id);
	int getDepartmentID();

	void setManagerName(string m);
	string getManagerName();
};

