#include "main.h"

/**
 * print_integer - prints a number interger number
 *
 * @args: argument list the function
 * Return: number the number print
 */

int print_integer(va_list args)
{
	int num;

	num = va_arg(args, int);

	return (int_new(num));
}
