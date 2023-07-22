#include "main.h"

int print_char(va_list args)
{
    c = va_arg(args, int);
    _putchar(c);
    return(0);
}