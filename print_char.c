#include "main.h"
/**
 * print_char - writes the character c to stdout
 * @args: input character
 * @pptr: ptr pointer
 * @ipptr: index of ptr pointer
 * Retturn: 1 is successful
*/
int print_char(va_list args, char *pptr, unsigned int ipptr)
{
    char c;

    c = va_arg(args, int);
    handl_ptr(pptr, c, ipptr);
    return (1);
}