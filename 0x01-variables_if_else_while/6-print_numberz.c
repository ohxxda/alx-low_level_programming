#include <stfio.h>

/**
 * main - entry point
 *
 * Description: print 0-9 using putchat
 * while using int variable
 *
 * Return: Always 0
*/

int main(void)


	while (digit <= 9)
	{
		/*covert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
