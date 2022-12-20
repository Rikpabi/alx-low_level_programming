#include "main.h"

/**
 * _puts - print a given string to screen
 *
 * @str: passed pointer argument for string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
