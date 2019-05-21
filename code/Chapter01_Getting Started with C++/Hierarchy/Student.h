#pragma once
#include "Person.h"


class Student :
	public Person
{
public:
	Student(std::string name, std::string university);
	void print() override;

private:
	std::string m_university;
};

