#include "main.h"
/**
 * print_u - prints an unsigned integer
 * @args: va_list of arguments from _printf
 * Return: number of char printed
 */
int print_u(va_list args)
{
	unsigned int u = va_arg(args, unsigned int);
	char *str = convert(u, 10, 0);

	return (_puts(str));
}