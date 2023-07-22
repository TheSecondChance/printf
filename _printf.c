#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: format passed to function
 * Return: for know i don't know.
 */
int _printf(const char *format, ...)
{
	int i, leng, count = 0;
	char c, hold_buff[1024];
	char *s;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);

				hold_buff[count] = c;
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				leng = string_len(s);

				for (i = 0; i < leng; i++)
				{
					hold_buff[count] = s[i];
					count++;
				}
			}
			else if (*format == '%')
			{
				hold_buff[count] = '%';
				count++;
			}
		}
		else
		{
			hold_buff[count] = *format;
			count++;
		}
		if (count >= 1024 - 1)
		{
			print_the_buff(hold_buff, &count);
		}
		format++;
	}
	va_end(args);
	hold_buff[count] = '\0';
	print_the_buff(hold_buff, &count);
	return (count);
}
