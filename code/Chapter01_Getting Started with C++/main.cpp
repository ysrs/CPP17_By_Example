#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Car.h"
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Stack.h"
#include "Queue.h"


using namespace std;

void TestCar()
{
	Car redVolvo(20, 30);
	cout << "Red Volvo Speed: " <<
		redVolvo.getSpeed() <<
		" miles/hour" <<
		", Direction: " <<
		redVolvo.getDirection() <<
		" degrees" << endl;

	redVolvo.accelerate(30);
	redVolvo.turnLeft(60);
	cout << "Red Volvo Speed: " <<
		redVolvo.getSpeed() <<
		" miles/hour" <<
		", Direction: " <<
		redVolvo.getDirection() <<
		" degrees" << endl;

	redVolvo.decelerate(60);
	redVolvo.turnRight(50);
	cout << "Red Volvo Speed: " <<
		redVolvo.getSpeed() <<
		" miles/hour" <<
		", Direction: " <<
		redVolvo.getDirection() <<
		" degrees" << endl;
}


void TestPerson()
{
	Person person("Monica");
	person.print();

	Student student("Demi", "MIT");
	student.print();

	Employee employee("Charles", "Microsoft");
	employee.print();

	Person *personPtr;
	
	personPtr = &person;
	personPtr->print();

	personPtr = &student;
	personPtr->print();

	personPtr = &employee;
	personPtr->print();
}

void TestStack()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);

	cout << "top " << s.top() <<
		", size " <<
		s.size() <<
		", empty " <<
		(s.empty() ? "true" : "false") << endl;

	s.pop();
	s.pop();
	s.push(4);

	cout << "top " << s.top() <<
		", size " <<
		s.size() <<
		", empty " <<
		(s.empty() ? "true" : "false") << endl;
}

void TestQueue()
{
	Queue q;
	q.enter(1);
	q.enter(2);
	q.enter(3);
	cout << "first " << q.first() << ", size " << q.size()
		<< ", empty " << (q.empty() ? "true" : "false") << endl;
	q.remove();
	q.remove();
	q.enter(4);
	cout << "first " << q.first() << ", size " << q.size()
		<< ", empty " << (q.empty() ? "true" : "false") << endl;
}

void main()
{
	//TestCar();
	//TestPerson();
	TestStack();
	//TestQueue();

	system("pause");
} 

