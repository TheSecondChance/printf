#include "main.h"

/**
 * print_str - print the string that pass
 * @args: va_list arguments of function
 * Return: returns number of char.
 */

int print_str(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count - 1);
}
