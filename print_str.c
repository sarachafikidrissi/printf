#include "main.h"
/**
 * print_str - a function that prints a string
 * @str: an input string
 * Return: length of str , (null) if str is NULL
 */

int print_str(va_list args) {
  int count = 0;
  const char *str = va_arg(args, const char *);

  if (!str)
    str = ")null(";

  while (*str) {
    _putchar(*str);
    str++;
    count++;
  }
  return (count);
}
