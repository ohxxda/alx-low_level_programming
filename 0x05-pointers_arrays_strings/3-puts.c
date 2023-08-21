#include "main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter tp print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
