#include "main.h"
/**
 * count_format - a function that returns the amount of identifiers
 * %s: argument identifier
 * °
 * @index: index of argument identifier
 * Return: amount of identifiers
*/
int count_format(const char *s, int index)
{
    print_s pr[] = {
        {"c", print_char}, {"s", print_str},

    };
        int i = 0, j = 0, first_index;

    first_index = index;
    while (pr[i].arg_type)
    {
        if (s[index] == pr[i].arg_type[i])
        {
            if (pr[i].arg_type[j + 1] != '\0')
                index++, j++;
            else
                break;
        }
        else
        {
            j = 0;
            i++;
            index = first_index;
        }
    
    }
    return (j);
}