#include "main.h"
/**
 * _put - fucnt ta
 * @str: strign
 * @args: id on t ne twowt nf
 * Return: cotn
 */

int _put(char *str, va_list args)
{
	int count = 0;
	char kal;
	(void)str;

	kal = va_arg(args, int);

	_pchar(kal);
	count++;
	return (count);
}

/**
 * _putstr - thsi is that
 * @str: string
 * @args: argument
 */
int _putstr(char *str, va_list args)
{
	int count = 0;
	char *kal;
	(void)str;

	kal = va_arg(args, char *);
	if (!kal)
		kal = "NULL";

	while (*kal)
	{
		_pchar(*kal);
		kal++;
		count++;
	}
	return (count);
}

/**
 * print_perce - print persencet
 * @str: strng taht
 * @args: argumment
 * Return: if correct tru
 */

int print_perce(char *str, va_list args)
{
	(void)str;
	(void)args;
	_pchar('%');
	return (1);
}

/**
 * _pchar - print vu
 * @c: caracter
 * Return: charcter tath
 */
int _pchar(char c)
{
	return (write(1, &c, 1));
}
