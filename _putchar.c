#include "main.h"

/**
 * _pchar - it's print single cahr
 * @c: alwys character to print
 * Return: that print.
 */

int _pchar(int c)
{
	return (write(1, &c, 1));
}
