#include "main.h"

/**
 * _perc - prints percentage
 *
 * @args: argument list
 *
 * Return: number of char printed
 */

int _perc(va_list args)
{
	char c = va_arg(args, int);

	if (c == '\0')
		return (0);
	_putchar('%');
	return (0);
}
