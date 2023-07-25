#include "main.h"
/**
 * print_binary - a function that handles 'b' in order
 * to convert a decimal to binary
 * @args: a pointer to that decimal number
 * Return: number of printed numbers
*/

int print_binary(va_list args)
{
	unsigned int decimal, m = 2147483648, j, limit = 0;
	unsigned int array[32];
	int count = 0;

	decimal = va_arg(args, unsigned int);
	array[0] = decimal / m;

	for (j = 1; j < 32; j++)
	{
		m /= 2;
		array[j] = (decimal / m) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		limit += array[j];
		if (limit || j == 31)
		{
			_putchar(array[j] + '0');
			count++;
		}
	}
	return (count);
}
