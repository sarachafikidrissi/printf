#include "main.h"

int print_binary(va_list args)
{
    unsigned int num, i = 0, j;
    int count = 0;
    char binary[32];
    num = va_arg(args, unsigned int);

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            binary[i] = 0;
            count++;
        }
        else
        {
            binary[i] = 1;
            count++;
        }

        num /= 2;
        i++;
    }
    binary[i] = '\0';

    rev_string(binary);
    for (j = 0; binary[j]; i++)
    {
        _putchar(binary[j]);
        j++;
    }
    return (j);
}
