#include "main.h"
/**
 * print_char - a function that handles 'c'
 * in order to print a character
 * @args: a pointer to that character
 * Return: count of printed character
*/
int print_char(va_list args) {
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}