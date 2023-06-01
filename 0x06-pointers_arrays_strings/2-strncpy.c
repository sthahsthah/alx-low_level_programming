#include<stdio.h>
#include<string.h>

/**
 * _strncpy - copies a string
 * @dest: string to copy
 * @src: string to copy
 * @n: 0
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (temp);
}
