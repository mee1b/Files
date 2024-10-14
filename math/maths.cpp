#include "maths.h"
#include <iostream>

void summ(int one, int two)
{
	std::cout << one << " + " << two << " = " << one + two << std::endl;
}
void subtract(int one, int two)
{
	std::cout << one << " - " << two << " = " << one - two << std::endl;
}
void multiplication(int one, int two)
{
	std::cout << one << " * " << two << " = " << one * two << std::endl;
}
void division(int one, int two)
{
	std::cout << one << " / " << two << " = " << one / two << std::endl;
}
void exponentiation(int one, int two)
{
	int buf = one;
	for (int i = 2; i <= two; ++i)
	{
		buf *= one;
	}
	std::cout << one << " в степени " << two << " = " << buf << std::endl;
}