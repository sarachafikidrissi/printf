#include "main.h"
/**
 * print_x - a function that prints an ascii char value in
 * upercase hexadecimal
 * @args: char to print
 * Return: number of printed characters
*/
int print_bigx(va_list args)
{
	unsigned int array[8];
	unsigned int i, m = 268435456, asc, limit = 0;
	char diff;
	int count = 0;

	asc = va_arg(args, unsigned int);
	diff = 'A' - ':';
	array[0] = asc / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		array[i] = (asc / m) % 16; 
	}
	for (i = 0; i < 8; i++)
	{
		limit += array[i];
		if (limit || i == 7)
		{
			if (array[i] < 10)
				_putchar(array[i] + '0');
			else
				_putchar(diff + array[i] + '0');
			count++;
		}
	}
	return (count);
}
