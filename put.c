#include "main.h"
/**
 * _putstr - print putchar.
 * @str: strin that pring
 * @args: argument that pased.
 * Return: to fund ths it tkae hour
 */
int _putstr(char *str, va_list args)
{
	int count = 0;
	char *kal;
	(void)str;
	kal = va_arg(args, char *);
	if (!kal)
	{
		kal = "NULL";
		return (6);
	}
	
	while (*kal)
	{
		_pchar(*kal);
		kal++;
		count++;
	}
	return (count);
}
