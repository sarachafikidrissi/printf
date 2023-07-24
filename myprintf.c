#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format:  a character string.
 * Return: number of printed characters.
*/

int _printf(const char *format, ...)
{
    int count = 0;

    va_list args;
    va_start(args, format);

    if (!format || !format[0])
        return (-1);
    
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(args, int);
                _putchar(c);
                count = count + 1;

            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                count += print_str(str);
            }
            else if (*format == '%')
            {
                _putchar('%');
                count++;
            }
            else if (*format == 'd' || *format == 'i')
            {
                int num = va_arg(args, int);
                if (num < 0)
                    count++;
                count += len_number(num);
                print_number(num);
            }
            else
            {
                _putchar('%');
                count++;
                if (*format)
                {
                    _putchar(*format);
                    count++;
                }
            }
            format++;
        }
        else
        {
            _putchar(*format);
            format++;
            count++;
        }
    }
    return (count);
}