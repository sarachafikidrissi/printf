#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - a struct for printer functions
 * @arg_type: identifier
 * @f: pointer to a printer functions
 * Description: struct that stores pointers to a
 * printer functions
*/

typedef struct print
{
    char *arg_type;
    int (*f)(va_list, char *, unsigned int);
}print_s;

/***printf function signature**/
int _printf(const char *format, ...);

int print_char(va_list, char *pptr, unsigned int ipptr);
int print_str(va_list args, char *pptr, unsigned int ipptr);



int print_ptr(char *pptr, unsigned int npptr);
int (*choose_func(const char *s, int index))(va_list, char *, unsigned int);
unsigned int handl_ptr(char *pptr, char c, unsigned int ipptr);
int count_format(const char *s, int index)




#endif