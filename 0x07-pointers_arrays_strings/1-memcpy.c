#include<stdio.h>

/**
 * _memcpy - function that copies a memory
 * @dest: char
 * @src: char
 * @n: integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
