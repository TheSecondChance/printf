#include "main.h"

/**
 * print_perc - print percent if it.
 * @args: argument list
 * Return: number of the char printe.
 */

int print_perc(va_list args)
{
	char c = va_arg(args, int);

	if (c == '\0')
		return (0);
	_pchar('%');
	return (0);
}
