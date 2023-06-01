#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest: string to concatenate
 * @src: string to concatenate
 * @n: 1
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *c = dest;

	while (*c != '\0')
	{
		c++;
	}
	while (*src != '\0' && n > 0)
	{
		*c = *src;
		src++;
		c++;
		n--;

	}
	*c = '\0';

	return (dest);
}
