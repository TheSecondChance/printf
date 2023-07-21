#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int my_strlen(const char *str);
void print_buffer(char buffer[], int *buff_ind);

#endif
