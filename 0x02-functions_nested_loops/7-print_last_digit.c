#include "main.h"

/**
  * print_last_digit - Entry point
  * Description - 'prints last digit of a number'
  * @h: The number to be checked for last digit
  * Return: last digit of a number h
  */

int print_last_digit(int h)
{
	int lastg = h % 10;

	if (lastg < 0)
	{
		lastg = lastg * -1;
	}
	_putchar(lastg + 48);
	return (lastg);
}
