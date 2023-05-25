#include<stdio.h>

/**
 * _isdigit - entryb point
 * @c: checks for a digit
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c);
{
	int c;

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
