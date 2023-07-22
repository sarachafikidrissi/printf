#include "main.h"
/**
 * print_str - writes the string to stdout
 * @args: input string
 * @pptr: ptr pointer
 * @ipptr: index for ptr pointer
 * Return: 1 is successful
*/
int print_str(va_list args, char *pptr, unsigned int ipptr)
{
    char *str;
    unsigned int i;
    char nill[] = "(null)";

    str = va_arg(args, char *);
    if (str == NULL)
    {
        for (i = 0; nill[i]; i++)
            ipptr = handl_ptr(pptr, nill[i], ipptr);
        return (2);
    }
    for (i = 0; str[i]; i++)
    {
        ipptr = handl_ptr(pptr, str[i], ipptr);
    }
    return (i);
}