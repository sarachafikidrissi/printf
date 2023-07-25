#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: the string to be reversed
 * Return: 0 is successful
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i)
		_putchar(s[--i]);
}