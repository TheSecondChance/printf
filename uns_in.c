#include "main.h"

/**
 * un_int - print unsigned int
 *
 * @n: input integer
 *
 * Return: count printed
 */

void print_un(int n);

int un_int(va_list args)
{
	unsigned int num;
	int count = 0;
	int n = va_arg(args, int);

	if (n < 0)
	{
		num = UINT_MAX + (n + 1);
		print_un(num / 10);
		_putchar(num % 10 + 48);
		count++;
	}
	else
	{
		if (n / 10)
			get_int(n / 10);
		_putchar(n % 10 + '0');
	}
	return (count);
}

/**
 * print_un - prints unsinged int
 *
 * @n: integer
 * Return: void
 */

void print_un(int n)
{
	if (n / 10)
		print_un(n / 10);
	_putchar(n % 10 + 48);
}
