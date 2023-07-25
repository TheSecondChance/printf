#include "main.h"

/**
 * get_int - prints integers
 *
 * @n: integer input
 *
 * Return: count printed
 */

int get_int(int n)
{
	int count = 0;
	unsigned int min;

	if (n == INT_MIN)
	{
		_putchar('-');
		count++;
		min = (unsigned int)(INT_MIN) * (-1);
		count += get_int(min / 10) + 1;
		_putchar(min % 10 + '0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
			count++;
		}
		if (n / 10)
			count += get_int(n / 10) + 1;
		_putchar(n % 10 + '0');
	}
	return (count);
}
