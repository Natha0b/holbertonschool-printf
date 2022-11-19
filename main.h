#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int function_char(va_list valist);
int function_int(va_list valist);
int function_s(va_list valist);
int function_percent(va_list valist);
int get_case(const char *format, int *p, va_list valist,
			 int *k, int count, ...);
#endif
