#include "main.h"

/**
 * _putchar - prints a single character
 *
 * @c: character to be printed
 *
 * Return: 0 on success, 1 otherwise
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
