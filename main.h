#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct fp - Struct fp
 *
 * @fp: The operator
 * @f: The function associated
 */

int _putchar(char c);
int _printf(const char *format, ...);
int function_char(va_list valist);
int function_int(va_list valist);
void function_s(va_list valist);

/*
int _strlen(char *s);
int (*get_print_func(char))(int, char *);
void function_percentage(va_list arg);
void function_s(va_list arg);

*/
#endif
