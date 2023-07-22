#include "main.h"
/**
 * print_ptr - prints ptr
 * @pptr: pointer to the allocated space of memory
 * @nptr: number of bytes to print
 * Return: number of bytes printed
*/
int print_ptr(char *pptr, unsigned int npptr)
{
    return (write(1, pptr, npptr));
}