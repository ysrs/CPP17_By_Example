#include "Employee.h"
#include <iostream>



using namespace std;

Employee::Employee(std::string name, std::string company) : Person(name),
	m_company(company)
{
}

void Employee::print()
{
	Person::print();
	cout << "Company " << m_company << endl;
}
