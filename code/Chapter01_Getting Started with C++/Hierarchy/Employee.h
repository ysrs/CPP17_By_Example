#pragma once
#include "Person.h"


class Employee :
	public Person
{
public:
	Employee(std::string name, std::string company);
	void print() override;

private:
	std::string m_company;
};

