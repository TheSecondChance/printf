#include "main.h"

/**
 * _str - prints a string
 *
 * @args: va_list arguments
 *
 * Return: returns number of char printed
 */

int _str(va_list args)
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
