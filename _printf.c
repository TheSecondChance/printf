#include "main.h"
/**
 * _printf - function taht print %s, %.
 * @format: that passed.
 * struct fun - hh i don't know.
 * fun_list: i odn. some adle dad.
 * Return: no idea.
 */
int _printf(char *format, ...)
{
	int i, char_count = 0;
	va_list args;

	struct fun fun_lsit[3] = {{'c', _putchar}, {'s', _putstr},
		{'%', print_perce}};
	va_start(args, formatstr);
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
			char_list++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
