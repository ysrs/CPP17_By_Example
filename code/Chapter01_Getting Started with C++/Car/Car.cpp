#include "Car.h"



Car::Car()
{
}

Car::Car(int speed, int direction) : m_speed(0), m_direction(0)
{
	m_speed = speed;
	m_direction = direction;
}

Car::~Car()
{
}


int Car::getSpeed() const
{
	return m_speed;
}
int Car::getDirection() const
{
	return m_direction;
}

void Car::accelerate(int speed)
{
	m_speed += speed;

	if (m_speed > 200)
	{
		m_speed = 200;
	}
}

void Car::decelerate(int speed)
{
	m_speed -= speed;

	if (m_speed < 0)
	{
		m_speed = -m_speed;

		if (m_speed > 200)
		{
			m_speed = 200;
		}

		if (m_direction < 180)
		{
			m_direction += 180;
		}
		else
		{
			m_direction -= 180;
		}
	}
}

void Car::turnLeft(int degrees)
{
	m_direction -= degrees;
	m_direction %= 360;

	if (m_direction < 0)
	{
		m_direction += 360;
	}
}

void Car::turnRight(int degrees)
{
	m_direction += degrees;
	m_direction %= 360;
}

