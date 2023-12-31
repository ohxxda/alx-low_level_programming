#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int prod, multi, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multi;

			if (prod <= 9)
				_putchar(' ');
			if (prod <= 99)
				_putchar(' ');
			if (prod >= 100)
			{
				_putchar((prod / 100) + 48);
				_putchar((prod / 10) % 10 + 43);
			} else if (prod <= 99 && prod >= 10)
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');

	}
}
