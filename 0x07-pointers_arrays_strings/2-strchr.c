#include<stdio.h>
#include<string.h>

/**
 * _strchr - locates a character in a string
 * @s: char
 * @c: character to locate
 * Return: char c 0r NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
