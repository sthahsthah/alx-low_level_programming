#include<stdio.h>

/**
 * _isdigit - entry point
 * @c: number to be checked
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
