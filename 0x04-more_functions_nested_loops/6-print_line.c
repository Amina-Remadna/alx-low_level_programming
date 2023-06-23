#include "main.h"

/**
 * print_line - print a straight line
 *
 * @c: is the number of times the _ character
 * should be printed
 */

void print_line(int n)
{
	int InChr;

	if (n <= 0)
		_putchr('\n');
	else
	{
		for (InChr = 1; InChr <= n; InChr++)
			_putchar('_');
		_putchar('\n');
	}
}
