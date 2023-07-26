#include "main.h"
/**
 * print_unsign - prints unsinged integer.
 * @num: integer paramater.
 */

void print_unsign(int num)
{
	if (num / 10)
		print_unsign(num / 10);
	_pchar(num % 10 + 48);
}
