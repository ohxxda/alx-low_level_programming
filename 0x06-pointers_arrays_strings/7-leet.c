#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
*/
char *leet(char *n)
{
	int *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			/*32 is the difference between lower case letters and upper case letters*/
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}

	return (n);
}

