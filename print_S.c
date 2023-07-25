#include "main.h"
/**
 * print_S - a function that prints a string and non
 * printable character ascii value
 * @args: string to print
 * Return : number of printed characters
 */
int print_S(va_list args) {
  int i, count = 0;
  char *res;
  char *s = va_arg(args, char *);

  if (!s)
    return (_puts("(null)"));

  for (i = 0; s[i]; i++) {
    if (s[i] > 0 && (s[i] < 32 || s[i] >= 127)) {
      _puts("\\x");
      count += 2;
      res = convert(s[i], 16, 0);
      if (!res[1])
        count += _putchar('0');
      count += _puts(res);
    } else
      count += _putchar(s[i]);
  }
  return (count);
}