#include "main.h"
/**
 * print_o - prints a number in base 8
 * @args: va_list arguments from _print
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_o(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if ( str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}