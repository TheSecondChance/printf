#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct fun - that store format spacifire
 * @c: that character passed
 * @fptr: function pointer
 */
struct fun
{
	char c;
	int (*fptr)(char *, va_list);
};

int _put(char *str, va_list args);
int _putstr(char *str, va_list args);
int _pchar(char c);
int print_perce(char *str, va_list args);
int _printf(char *formatstr, ...);
int _putchar(char c);

#endif
