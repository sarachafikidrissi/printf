#include "main.h"
#include <limits.h>

int print_value(int num);
/**
 * print_nnumber - a function that prints digits
 * @num: an input number
 * Return: 1 on success
 */
int print_number(va_list args) {

  int number = va_arg(args, int);
  return (print_value(number));
}

int print_value(int num) {
  int count = 0;
  if (num == INT_MIN) {
    _putchar('-');
    _putchar('2');
    count += 2;
    count += print_value(147483648);
    return (1);
  } else if (num < 0) {
    _putchar('-');
    num = -num;
    count++;
  }
  if (num >= 10) {
    count += print_value(num / 10);
    count += print_value(num % 10);
  } else if (num < 10) {
    _putchar(num + '0');
    count++;
  }
  return (count);
}