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

	char *traverse = NULL, *s;
	unsigned int c;
	int i;
	va_list(arg);

	va_start(arg, format);

	for (i = 0; format[i]  != '\0'; i++)

	traverse = malloc(i + 1);

	if (traverse == NULL)
	{
		return (0);
	}
	for

	while (*traverse != '\0')
	{
		_putchar(*traverse);
		traverse++;

		if ( *traverse != %)
		{
			_putchar(*traverse)
			traverse++;
		}

	switch (*traverse + 1)
	{
	case 'c':
		c = (char)va_arg(arg, int);
		_putchar(c);
		break;
	case 's':
		s = va_arg(arg, char *);
		puts(s);
		break;
	case '%':
		% = (char)va_arg(arg, int);
		_putchar(%);
		break;
	

	default:

		continue;
	}
	write
	}

	va_end(arg);
	return (*traverse);
}