#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: the string separator
 * @n: the strings arguments
 * @...: the strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!h)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
i		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
