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
	va_list valist;
	char *traverse = NULL;
	int i, aux = 0;

	va_start(valist, format);

	if (!format)
		return (0);

	for (i = 0; format[i] != '\0'; i++)
	{
	}

	traverse = malloc(i + 1);

	if (traverse == NULL)
	{
		return (0);
	}

	i = 0;

	while (format[i] != '\0')
	{

		if (format[i] != '%')
		{
			_putchar(format[aux]);
			aux++;
		}

		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				function_char(valist);
				aux++;
				i++;
				break;

			case 'd':
				function_int(valist);
				aux++;
				i++;
				break;

			case 's':
				function_s(valist);
				aux++;
				i++;
				break;

			case 'i':
				function_int(valist);
				aux++;
				i++;
				break;

				/*
				case '%':
					c = '%';
					write(1, &c, 1);
					break;
					*/

			default:

				continue;
			}
			aux++;
		}
		i++;
	}

	va_end(valist);
	return (aux);
}