#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @seperator: the string seperator
 * @n: the numbrer of arguments
 * @...: the integers to print
 *
 * Return: void
 */
void print_numbers(const cgar *seperator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (seperator ? seperator : "") : "\n");
	va_end(ap);
}
