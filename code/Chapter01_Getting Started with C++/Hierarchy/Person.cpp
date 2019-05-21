#include "Person.h"
#include <iostream>



using namespace std;

Person::Person(std::string name) : m_name(name)
{
}

void Person::print()
{
	cout << "Person " << m_name << endl;
}


