#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of rhe string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\n'; s++)
		++counter;
	return (counter);
}