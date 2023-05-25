#include<stdio.h>

/**
 * _isdigit - entryb point
 * @c: checks for a digit
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)

		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
