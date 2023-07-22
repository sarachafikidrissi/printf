#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: input string
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
    unsigned int count = 0, i = 0, ipptr = 0;
    va_list args;
    int (*fptr)(va_list, char *, unsigned int);
    char *ptr;

    va_start(args, format);
    ptr = malloc(sizeof(char) * 1024);

    if (format == NULL || ptr == NULL || (format[i] == '%' && format[i + 1] == '\0') )
        return (-1);
    if (format[i] == '\0')
        return (0);

    for (i = 0; format != NULL && format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0')
            {
                print_ptr(ptr, ipptr);
                free(ptr);
                va_end(args);
                return (-1);
            }
            else
            {
                ptr = choose_func(format, i + 1);
                if (ptr == NULL)
                {
                    if (format[i + 1] == ' ' && format[i + 2] == '\0')
                        return (-1);

                    handl_ptr(ptr, format[i], ipptr);
                    count++;
                    i--;
                }
                else
                {
                    count += fptr(args, ptr, ipptr);
                    i += count_format(format, i + 1);
                }
            }
            i++;
        }
        else
        {
            handl_ptr(ptr, format[i], ipptr);
            count++;
        }
        for (ipptr = count; ipptr > 1024; ipptr -=1024)
            ;
    }
    print_ptr(ptr, ipptr);
    free(ptr);
    va_end(args);
    return (count);
}