#pragma once


class Cell;
class Queue
{
public:
	Queue();
	void enter(int value);
	int first();
	void remove();
	int size() const;
	bool empty() const;

private:
	Cell *m_firstCellPtr;
	Cell *m_lastCellPtr;
	int m_size;
};

