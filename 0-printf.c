#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *_printf- print a variable
 *@format: variable printf
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{

	char *traverse = NULL, *s = NULL;
	int c = 0;
	int i;
	int aux = 0;
	va_list(arg);

	va_start(arg, format);

	if (!format)
		return (0);

	for (i = 0; format[i] != '\0'; i++)

		traverse = malloc(i + 1);

	if (traverse == NULL)
	{
		return (0);
	}


	while (format[aux] != '\0')
	{

		if (format[aux] != '%')
		{
			_putchar(format[aux]);
		}

		if (format[aux] == '%')
		{
		switch (format[aux + 1])
		{
		case 'c':
			c = (char)va_arg(arg, int);
			write(1, &c, 1);
			return (1);
			break;
		case 's':
			s = va_arg(arg, char *);
			write(1, &s, 1);
			return (1);
			break;
		case '%':
			c = (char)va_arg(arg, int);
			write(1, &c, 1);
			return (1);
			break;

		default:
		return (1);

			continue;
		}
		}
		aux++;
	}


	va_end(arg);
	return (format[aux]);
}