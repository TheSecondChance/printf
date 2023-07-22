#include "main.h"
/**
 * string_len - count the length of string.
 * @str: passed string into func.
 * Return: len.
 */
int string_len(const char *str)
{
        int len = 0;

        while (*str != '\0')
        {
                len++;
                str++;
        }

        return (len);
}
/**
 * print_the_buff - print the content that hlod buff.
 * @buffer: content of array.
 * @buff_ind: add next char represent length.
 */
void print_the_buff(char buffer[], int *buff_ind)
{
        if (*buff_ind > 0)
        {
                write(1, buffer, *buff_ind);
        }
        *buff_ind = 0;
}

