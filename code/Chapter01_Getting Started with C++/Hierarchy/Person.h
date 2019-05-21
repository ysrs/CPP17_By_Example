#pragma once
#include <string>


class Person
{
public:
	Person(std::string name);
	virtual void print();

private:
	std::string m_name;
};

