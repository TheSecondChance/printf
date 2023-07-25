#include "main.h"

/**
 * get_spes - checks if spesifier exist
 *
 * @format: specifier
 * @index: specifer index
 *
 * Return: returns number char printed
 * otherise NULL
 */

int (*get_spes(const char *format, int index))(va_list args)
{
	int i;
	struct op ops[] = {
		{"s", _str}, {"i", int_print},
		{"c", _c}, {"d", int_print},
		{"%", _perc}, {"u", un_int},
		{NULL, NULL},
	};

	i = 0;

	while (ops[i].choice != NULL)
	{
		if (ops[i].choice[0] == format[index])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
