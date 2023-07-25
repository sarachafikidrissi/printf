#include "main.h"
/**
 * print_S - a function that prints a string and non
 * printable character ascii value
 * @args: string to print
 * Return : number of printed characters
*/
int print_S(va_list args)
{
	unsigned int i = 0;
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			if (str[i] == '\n')
			{
				_putchar('\\');
				_putchar('x');
				_putchar('0');
				_putchar('A');
				count += 4;
			}
			else if (str[i] == '\t')
			{
				_putchar('\\');
				_putchar('x');
				_putchar('0');
				_putchar('9');
				count += 4;

			}
			else
			{
				_putchar('\\');
				_putchar('x');
				count += 2;
				count += print_x(args);
			}
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}