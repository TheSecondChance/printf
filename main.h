#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct op - specifier selecter
 * @choice: character choice.
 * @f: function pointer to function
 */

struct list
{
	char *choice;
	int (*f)(va_list args);
};

void print_unsign(int num);
int _printf(const char *format, ...);
int _pchar(int c);
int print_integer(va_list);
int print_str(va_list);
int print_perc(va_list);
int (*check_value(const char *, int))(va_list);
int int_new(int);
int unsign_int(va_list);
int char_new(va_list);

#endif

