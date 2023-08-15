#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet letters exept q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)


	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;

	}
	putchar('\n');

	return (0);
}
