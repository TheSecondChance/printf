#include "main.h"

/**
 * hexprint - print hexadecimal number
 *
 * @args: argument va_list
 *
 * Return: return number of char printed
 */

int hexprint(va_list args)
{
	int hexT[16], i, num, count = 0;
	unsigned int ui = va_arg(args, unsigned int);
	char h[] = { 'a', 'b', 'c', 'd', 'e', 'f'};

	hexT[0] = ui % 16;
	num = ui / 16;

	for (i = 1; num > 0; i++)
	{
		hexT[i] = num % 16;
		num /= 16;
	}

	for (i -= 1; i >= 0; i--)
	{
		if (hexT[i] > 9)
		{
			_putchar(h[hexT[i] - 10]);
			count++;
		}
		else
		{
			_putchar(hexT[i] + '0');
			count++;
		}
	}
	return (count);
}

/**
 * heXprint - print hexadecimal number in caps
 *
 * @args: argument va_list
 *
 * Return: return number of char printed
 */

int heXprint(va_list args)
{
	unsigned int ui = va_arg(args, unsigned int);
	int hexT[16], i, num, count = 0;
	char h[] = { 'A', 'B', 'C', 'D', 'E', 'F'};

	hexT[0] = ui % 16;
	num = ui / 16;

	for (i = 1; num > 0; i++)
	{
		hexT[i] = num % 16;
		num /= 16;
	}

	for (i -= 1; i >= 0; i--)
	{
		if (hexT[i] > 9)
		{
			_putchar(h[hexT[i] - 10]);
			count++;
		}
		else
		{
			_putchar(hexT[i] + '0');
			count++;
		}
	}
	return (count);
}
