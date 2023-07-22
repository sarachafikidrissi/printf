#include "main.h"

/**
 * handl_ptr - concatenates the ptr characters
 * @pptr: ptr pointer
 * @c: character to concatente
 * @iptr: index of ptr pointer
 * Return: index of ptr pointer
*/
unsigned int handl_ptr(char *pptr, char c, unsigned int ipptr)
{
    if (ipptr == 1024)
    {
        print_ptr(pptr, ipptr);
        ipptr = 0;
    }
    pptr[ipptr] = c;
    ipptr++;
    return (ipptr);
}