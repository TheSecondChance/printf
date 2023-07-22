#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int string_len(const char *str);
void print_the_buff(char buffer[], int *buff_ind);

#endif
