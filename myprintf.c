#include "main.h"
#include <unistd.h>

int _printf(const char *format, ...)
{
    va_list args;
    unsigned int count = 0, i = 0;
    char c;

    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == 'c')
            {
               print_char(args); 
                count ++;
            }
            /*
            else if (format[i + 1] == 's')
            {
                print_string(va_arg(args, char *));
                count++;
            }*/
        }
    }
    va_end(args);
    return (count);
}
