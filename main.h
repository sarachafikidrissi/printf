#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct specifier {
  const char *s;
  int (*f)(va_list);
} specifier;

/* printf function */
int _printf(const char *format, ...);

/* functions */
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_rev(va_list args);
int print_root(va_list args);
int print_binary(va_list args);
int print_S(va_list args);
int print_x(va_list args);
int print_address(va_list args);
int _puts(char *str);
int print_u(va_list args);
int print_o(va_list args);
int print_bigx(va_list args);
int print_dec(va_list args);
int print_int(va_list args);

/* helpers */
int len_number(int num);
int _putchar(char c);
char *convert(unsigned long int num, int base, int lowercase);

#endif