#include "main.h"

int my_strlen(const char *str);
void print_buffer(char buffer[], int *buff_ind);

int _printf(const char *format, ...)
{
    int i;
    char output[1000];
    int count = 0;
    va_list args;
    va_start(args, format);


while (*format != '\0')
{
    if (*format == '%')
    {
        format++;
        if (*format == 's')
        {
            char *s = va_arg(args, char *);
            int len = my_strlen(s);
            for (i = 0; i < len; i++)
            {
                output[count] = s[i];
                count++;
            }
        }
    }
    else
    {
        output[count] = *format;
        count++;
    }
    if (count >= 1000 - 1)
    {
        print_buffer(output, &count);
    }
    format++;
  }
    va_end(args);
    output[count] = '\0';
    print_buffer(output, &count);
    return count;
}
int my_strlen(const char *str)
{
    int len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

void print_buffer(char buffer[], int *buff_ind)
{
    if (*buff_ind > 0)
    {
        write(1, buffer, *buff_ind);
    }
    *buff_ind = 0;
}


