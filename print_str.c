#include "main.h"
/**
 * print_str - a function that prints a string
 * @str: an input string
 * Return: length of str , (null) if str is NULL
*/

int print_str(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		print_str("(null)");
		return (1);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
