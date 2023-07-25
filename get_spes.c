#include "main.h"

/**
 * check_value - check if the spesifier exist from struct op.
 * @format: specifier va_list
 * @contain: index that have spacifier
 * struct list - sturct that that have spacifier
 * array: that arary of list.
 * Return: return char number of printed.
 * or it print NUL.
 */

int (*check_value(const char *format, int contain))(va_list args)
{
	int i;
	struct op ops[] = {{"s", _str}, {"i", int_print},
		{"c", _c}, {"d", int_print}, {"%", _perc}, {"u", un_int}, {NULL, NULL}
	};

	i = 0;

	while (array[i].choice != NULL)
	{
		if (array[i].choice[0] == format[contain])
			return (array[i].f);
		i++;
	}
	return (NULL);
}
