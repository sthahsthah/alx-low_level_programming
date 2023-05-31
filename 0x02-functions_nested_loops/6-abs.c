#include "main.h"

/**
  * _abs - Entry point
  * Description - 'prints absolute value of a number'
  * @h: The number to be computed
  * Return: absolute value of an integer
  */

int _abs(int h)
{
	if (h < 0)
	{
		return (h * -1);
	}
	else
	{
		return (h);
	}
}
