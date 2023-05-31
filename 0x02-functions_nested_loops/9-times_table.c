#include "main.h"

/**
  * times_table - Entry point
  * Description - 'prints the 9 times table'
  * Returns: void (sucess)
  */

void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	c = a * b;
	if (c > 9)
	{
	d = c % 10;
	e = (c - d) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(e + 48);
	_putchar(d + 48);
	}
	else
	{
	if (b != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(c + 48);
	}
	}
	_putchar('\n');
	}
}
