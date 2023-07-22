#include "main.h"
/**
 * choose_func - a function that selects the correct function to
 * perform the operation
 * @s: argument identifier
 * @index: index for argument identifier
 * Return: pointer to a function
*/
int (*choose_func(const char *s, int index))(va_list, char *, unsigned int)
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
    return (pr[i].f);
}