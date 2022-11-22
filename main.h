#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct printf - Struct printf
 *
 * @printf: The operator
 * @f: The function associated
 */
typedef struct printf
{
	char *printf;
	int (*f)(va_list);
} printf_t;

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int function_char(va_list valist);
int function_int(va_list valist);
int function_s(va_list valist);
int function_percent(va_list valist);
int get_case(const char *format, ...);

#endif
