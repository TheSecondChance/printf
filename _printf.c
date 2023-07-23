#include "main.h"
/**
 * _printf - function taht print %s, %.
 * @format: that passed.
 * Return: no idea.
 */
int _printf(char *format, ...)
{
	int i, char_count = 0;
	va_list args;
	struct fun fun_list[3] = {{'c', _put}, {'s', _putstr}, {'%', print_perce}};

	if (*format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < 3; i++)
			{
				if (fun_list[i].c == *format)
				{
					char_count += fun_list[i].fptr(format, args);
					break;
				}
			}
		}
		else
		{
			_pchar(*format);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
