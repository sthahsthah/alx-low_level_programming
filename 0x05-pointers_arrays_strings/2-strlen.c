#include<stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s:  1
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
		return (len);
}
