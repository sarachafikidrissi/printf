#include "main.h"

int print_root(va_list args) {
  char *s = va_arg(args, char *);

  int i, j, count = 0;

  char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

  for (i = 0; s[i]; i++) {
    for (j = 0; input[j]; j++) {
      if (input[j] == s[i]) {
        _putchar(output[j]);
        count++;
        break;
      }
    }
    if (!input[j]) {
      _putchar(s[i]);
      count++;
    }
  }
  return (count);
}