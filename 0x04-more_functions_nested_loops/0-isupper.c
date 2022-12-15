#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 * @c: int type number
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
9
{
10
	char uppercase = 'A';
11
	int isupper = 0;
12

13
	for (; uppercase <= 'Z'; uppercase++)
14
	{
15
		if (c == uppercase)
16
		{
17
			isupper = 1;
18
			break;
19
		}
20
	}
21

22
	return (isupper);
23
}
