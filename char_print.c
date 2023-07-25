#include "main.h"

/**
 * char_new - prints the characters
 *
 * @args: argument that list passed
 *
 * Return: number of char printed of char_new
 */

int char_new(va_list args)
{
	char c = va_arg(args, int);

	_pchar(char_new);
	return (0);
}
