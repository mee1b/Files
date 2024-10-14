#include <iostream>
#include "Counter.h"

Counter::Counter()
{
	this->count = 1;
}
void Counter::plusOne()
{
	count++;
}
void Counter::minusOne()
{
	count--;
}
void Counter::showCount() const
{
	std::cout << "Значение счетчика равно: ";
	std::cout << count << std::endl;
}
void Counter::newCount(int count)
{
	this->count = count;
}
