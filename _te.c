#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, c
/**
 * struct func - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
	struct func funcarray[3] = {{'c', _putchar}, {'s', _putstring},
		{'%', print_percent}};
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < 3; i++)
		}
	}
}
