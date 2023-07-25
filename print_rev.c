#include "main.h"

int print_rev(va_list args) {

  int i = 0;
  int count = 0;
  char *str = va_arg(args, char *);

  while (str[i])
    i++;
  for (i -= 1; i >= 0; i--) {
    _putchar(str[i]);
    count++;
  }
  return (count);
}