#include "main.h"

/**
 * int_new - print that integers passed
 *
 * @i: integer input parameter
 *
 * Return: that count printed
 */

int int_new(int i)
{
	int count = 0;
	unsigned int unsign;

	if (i == INT_MIN)
	{
		_pchar('-');
		count++;
		unsign = (unsigned int)(INT_MIN) * (-1);
		count += int_new(unsign / 10) + 1;
		_pchar(unsign % 10 + '0');
	}
	else
	{
		if (i < 0)
		{
			_pchar('-');
			i = -i;
			count++;
		}
		if (n / 10)
			count += int_new(i / 10) + 1;
		_pchar(i % 10 + '0');
	}
	return (count);
}
