#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: always 0
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] !='\0')

		s++;
	while (*haystack)
	{
		for(i = 0);needle[i]; i++
