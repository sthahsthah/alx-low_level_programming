#include<stdio.h>
#include<string.h>

/**
 * _strspn - Gets a length of a prefix substring
 * @s: character
 * @accept: character
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int length = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (accept[j] != '\0' && accept[j] != s[i])
	{
		j++;
	}
	if (s[i] == accept[j])
	{
		length++;
	if (accept[j] == '\0')
		return (length);
	}
	return (length);
}
