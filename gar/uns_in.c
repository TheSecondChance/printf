#include "main.h"
/**
 * unsign_int - print unsigned integer
 * @args: input integer maybe
 * Return: count printed
 */

int unsign_int(va_list args)
{
	unsigned int num;
	int count = 0;
	int n;

	n = va_arg(args, int);

	if (n < 0)
	{
		num = UINT_MAX + (n + 1);
		print_unsign(num / 10);
		_pchar(num % 10 + 48);
		count++;
	}
	else
	{
		if (n / 10)
			int_new(n / 10);
		_pchar(n % 10 + '0');
	}
	return (count);
}
