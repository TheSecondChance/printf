#include "main.h"

/**
 * _c - prints characters
 *
 * @args: argument list
 *
 * Return: number of char printed
 */

int _c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (0);
}
