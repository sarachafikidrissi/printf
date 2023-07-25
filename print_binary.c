#include "main.h"

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
		a[j] = (decimal / m) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		limit += array[j];
		if (limit || j == 31)
		{
			_putchar(a[j] + '0');
			count++;
		}
	}
	return (count);
}