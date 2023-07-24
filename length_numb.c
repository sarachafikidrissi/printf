#include "main.h"
/**
 * len_number - a function that counts the length of a number
 * @num: an input number
 * Return: length of number
*/

int len_number(int num)
{
    if (num == 0)
        return (0);
    return (1 + len_number(num / 10));
}