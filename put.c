#include "main.h"
/**
 * _putstr - print putchar.
 * @str: strin that pring
 * @args: argument that pased.
 * Return: to fund ths it tkae hour
 */
int _putstr(char *str, va_list args)
{
	if (str == NULL)
	{
		str = "(null)";
	}
	return (6);

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
