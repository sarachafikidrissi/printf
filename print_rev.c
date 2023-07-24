#include "main.h"

int print_rev(char *str)
{
    int i, count = 0;

    if (str == NULL)
    {
        print_rev("(null)");
        return (1);
    }
    while (str[i])
        i++;
    
    while (i)
        _putchar(str[--i]);
        count++;
    return (count);
}