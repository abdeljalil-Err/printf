#ifndef _PRINT_FUN_H
#define _PRINT_FUN_H

/*The standard libreries*/

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/* The functions prototypes : */
int _printf(const char *format, ...);
int _printstring(va_list args);
int _printK(va_list args);
int _print_(va_list args);
int _printmodulo(va_list args);
int _printchar(va_list args);
int _putchar(char a);
int _printint(va_list args);
/* The structers prototype : */

/**
* struct specifier_list - create a list of specifiers.
* @sp_char: the caracter specifier.
* @sp_print_fun: the pointer function.
*/
typedef struct specifier_list
{
char sp_char;
int (*sp_print_fun)(va_list);
} specifier_t;

#endif /*_PRINT_FUN_H*/

