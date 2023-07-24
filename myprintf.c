#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format:  a character string.
 * Return: number of printed characters.
*/
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;
	
	va_start(args, format);

	if (!format || !format[0])
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);
				_putchar(c);
				count = count + 1;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				count += print_str(str);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				if (num < 0)
					count++;
				count += len_number(num);
				print_number(num);
			}
			else if (*format == 'r')
			{
				char *str = va_arg(args, char *);
				count += print_rev(str);
			}
			else
			{
			}
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
