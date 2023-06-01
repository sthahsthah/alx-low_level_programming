#include<stdio.h>
#include "main.h"
#include<string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: string to concatenate
 * @src: string to concatenate
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*c != '\0')
	{
		c++;
	}
	while (*src != '\0')
	{
		*c = *src;
		src++;
		c++;

		*c = '\0';
	}
	return (dest);
}
