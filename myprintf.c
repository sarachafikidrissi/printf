#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 * Return: number of printed characters.
 */
int _printf(const char *format, ...) {
	int count = 0, j, found = 0;
	specifier mt[] = {
			{"c", print_char}, {"s", print_str}, {"d", print_dec},
			{"i", print_int}, {"%", print_percent}, {"r", print_rev},
			{"R", print_root}, {"b", print_binary}, {"S", print_S},
			{"x", print_x}, {"p", print_address}, {"u", print_u}, {"o", print_o},
			{"X", print_bigx}, {NULL, NULL}};

	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format) {
		if (*format == '%') {
			format++;
			for (j = 0; mt[j].s; j++) {
				if (*format == *mt[j].s) {
					count += mt[j].f(args);
					found = 1;
					break;
				}
			}

			if (!found) {
				_putchar('%');
				count++;
				_putchar(*format);
			}
			format++;
		} else {
			_putchar(*format);
			format++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
