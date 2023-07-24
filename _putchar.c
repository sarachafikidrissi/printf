#include "main.h"
/**
 * _putchar - a function that prints characters
 * @c: an input character
 * Return: character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
