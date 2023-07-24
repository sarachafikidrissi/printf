#include "main.h"

int print_rev(char *str)
{
    int i = 0, count = 0;

    if (str == NULL)
        str = ")llun(";
    while (str[i])
        i++;
    for (i -=1; i >= 0; i--)
    {
        _putchar(str[i]);
        count++;
    }
    return (count);
}