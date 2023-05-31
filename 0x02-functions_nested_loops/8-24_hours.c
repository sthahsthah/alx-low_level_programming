#include "main.h"

/**
  * jack_bauer -  Entry point
  * Description - prints every minute of the day from 00:00 to 23:59
  * Return: void (sucess)
  */

void jack_bauer(void)
{
	int h, a, b, i;

	for (h = 0; h <= 2; h++)
	{
	for (a = 0; a <= 9; a++)
	{
	if ((h <= 1 && h <= 9) || (h <= 2 && a <= 3))
	{
	for (b = 0; b <= 5; b++)
	{
	for (i = 0; i <= 9; i++)
	{
	_putchar(h + 48);
	_putchar(a + 48);
	_putchar(58);
	_putchar(b + 48);
	_putchar(i + 48);
	_putchar('\n');
	}
	}
	}
	}
	}
}
