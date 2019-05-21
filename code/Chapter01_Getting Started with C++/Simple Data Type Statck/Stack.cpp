#include "Stack.h"
#include "Cell.h"

#include <cassert>


using namespace std;
Stack::Stack() : m_firstCellPtr(nullptr), m_size(0)
{
}

void Stack::push(int value)
{
	m_firstCellPtr = new Cell(value, m_firstCellPtr);
	++m_size;
}

int Stack::top()
{
	assert(!empty());
	return m_firstCellPtr->value();
}

void Stack::pop()
{
	assert(!empty());
	Cell *deleteCellPtr = m_firstCellPtr;
	m_firstCellPtr = m_firstCellPtr->getNext();
	delete deleteCellPtr;
	--m_size;
}

int Stack::size() const
{
	return m_size;
}


bool Stack::empty() const
{
	return (m_firstCellPtr == nullptr);
}


