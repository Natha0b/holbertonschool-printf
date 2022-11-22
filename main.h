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
	void (*f)(char *buff, va_list);
} printf_t;

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
void function_char(char *buf, va_list valist);
void function_int(char *buff, va_list valist);
void function_s(char *buff, va_list valist);
void function_percent(char *buff, va_list valist);
int check_case(char s);
void (*get_case(const char *format, int i))(char *buff, va_list valist);

#endif
