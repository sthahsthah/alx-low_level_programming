#include "main.h"

/**
  * _isalpha - Entry poin
  * Description - 'checks whether c is lowercaseed or uppercased letter'
  * @c: The character to be checked
  * Return: 1 if character is lowercased or upper cased, 0 if otherwise
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
