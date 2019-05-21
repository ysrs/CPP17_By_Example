#include "Student.h"
#include <iostream>


using namespace std;

Student::Student(std::string name, std::string university) : Person(name),
	m_university(university)
{
}

void Student::print()
{
	Person::print();
	cout << "University " << m_university << endl;
}

