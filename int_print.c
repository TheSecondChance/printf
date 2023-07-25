#include "main.h"

/**
 * int_print - prints a number
 *
 * @args: argument list
 *
 * Return: numbers printed
 */

int int_print(va_list args)
{

	int n = va_arg(args, int);

	return (get_int(n));
}
