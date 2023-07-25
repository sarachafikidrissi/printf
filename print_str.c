#include "main.h"
/**
 * print_str - a function that prints a string
 * @args: pointer to the string to be printed
 * Return: length of str , (null) if str is NULL
 */

int print_str(va_list args) {
	int count = 0;
	const char *str = va_arg(args, const char *);

	if (!str)
		str = ")null(";

	while (*str) {
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
