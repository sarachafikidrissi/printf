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
int print_number(va_list args);
int print_percent(va_list args);
int print_rev(va_list args);

/* helpers */
int len_number(int num);
int _putchar(char c);

#endif