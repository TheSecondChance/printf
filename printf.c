#include "main.h"
/**
 * _printf - prints the format
 * @format: format char
 * Return: number of the char
 */

int _printf(const char *format, ...)
{
	int i, co, count = 0, count_new = 0;
	int (*funcptr)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == ' ')
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			count_new++;
			if (format[i + 1] == '\0' && count_new == 1)
				return (-1);
			funcptr = check_value(format, i + 1);
			if (funcptr)
			{
				i++;
				co = funcptr(args);
				count += co;
				count++;
				continue;
			}
		}
		_pchar(format[i]), count++;
	}
	va_end(args);
	return (count);
}
