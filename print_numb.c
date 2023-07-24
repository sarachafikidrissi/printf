#include "main.h"
#include <limits.h>
/**
 * print_nnumber - a function that prints digits
 * @num: an input number
 * Return: 1 on success
*/
int print_number(int num)
{
	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
	else if (num < 10)
	{
		_putchar(num + '10');
	}
	return (1);
}
