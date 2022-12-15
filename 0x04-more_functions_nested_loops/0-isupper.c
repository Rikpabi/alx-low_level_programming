#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 * @c: int type number
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;
	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c >=65 && c <= 91)
		{
			return (1);
			break;
		}
	}

	return (0);
}
