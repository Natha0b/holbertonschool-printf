#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *_printf- print a variable
 *@format: variable printf
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{

	char *traverse, *s;
	unsigned int c;
	int i;
	va_list(arg);

	va_start(arg, format);

	for (i = 0; i < *traverse; i++)


			traverse = malloc(format[i]);

	if (traverse == NULL)
	{
		return (0);
	}

	while (*traverse != '%')
	{
		_putchar(*traverse);
		traverse++;
	}
	traverse++;

	switch (*traverse)
	{
	case 'c':
		c = (char)va_arg(arg, int);
		_putchar(c);
		break;
	case 's':
		s = va_arg(arg, char *);
		puts(s);
		break;

	default:

		break;
	}

	va_end(arg);
	return (*traverse);
}