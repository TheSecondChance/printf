#include "main.h"

/**
 * _oct - print octal number
 *
 * @args: arguments
 *
 * Return: return amount of char
 * printed
 */

int _oct(va_list args)
{
	unsigned int ui = va_arg(args, unsigned int);
	int i, num, oct[11], count = 0;

	oct[0] = ui % 8;
	num = ui / 8;

	for (i = 1; num > 0; i++)
	{
		oct[i] = num % 8;
		num /= 8;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(oct[i] + '0');
		count++;
	}

	return (count);

}
