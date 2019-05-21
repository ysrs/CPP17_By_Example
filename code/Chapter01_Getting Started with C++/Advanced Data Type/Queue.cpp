#include <cassert>
#include "Cell.h"
#include "Queue.h"


using namespace std;

Queue::Queue() : m_firstCellPtr(nullptr),
	m_lastCellPtr(nullptr),
	m_size(0)
{
}

void Queue::enter(int value)
{
	Cell *newCellPtr = new Cell(value, nullptr);

	if (empty())
	{
		m_firstCellPtr = m_lastCellPtr = newCellPtr;
	}
	else
	{
		m_lastCellPtr->setNext(newCellPtr);
		m_lastCellPtr = newCellPtr;
	}

	++m_size;
}

int Queue::first()
{
	assert(!empty());
	return m_firstCellPtr->value();
}

void Queue::remove()
{
	assert(!empty());
	Cell *deleteCellPtr = m_firstCellPtr;
	m_firstCellPtr = m_firstCellPtr->getNext();
	delete deleteCellPtr;
	--m_size;
}

int Queue::size() const
{
	return m_size;
}

bool Queue::empty() const
{
	return (m_firstCellPtr == nullptr);
}


