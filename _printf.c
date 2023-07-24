#include "main.h"
/**
 * _printf - function taht print %s, %.
 * @format: that passed.
 * Return: no idea.
 */
int _printf(char *format, ...)
{
	int i = 0, char_count = 0;
	va_list args;
	fun_list my_aar[4] = {{'c', _put}, {'s', _putstr}, {'%', print_perce},
		{'\0', NULL}};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == ' ' || *format == '\0')
			{
				return (-1);
			}
			if (*format == '%')
			{
				return (-1);
			}
			while (i < 4)
			{
				if (my_aar[i].c == *format)
				{
					char_count += my_aar[i].fptr(format, args);
					break;
				}
				else
				{
					_pchar('%');
					_pchar(*format);
					char_count++;
					break;
				}
			}
		}
		else if (*format == '\0')
		{
			return (-1);
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
