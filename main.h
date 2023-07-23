#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

struct func {
  char c;
  int (*fptr)(char *, va_list);
};

int _putchar(char *str, va_list args);
int _putstring(char *str, va_list args);
int _pchar(char c);
int print_percent(char *str, va_list args);
int _printf(char *formatstr, ...);

#endif
