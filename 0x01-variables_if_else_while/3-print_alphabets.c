#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;

	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
