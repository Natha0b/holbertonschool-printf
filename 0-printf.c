#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - print a variable
 * @format: variable printf
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	char *traverse = NULL;
	int i, aux = 0;

	va_start(arg, format);

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
			while (format[i++] == ' ');
			switch (format[i])
			{
			case 'c':
				function_char(arg);
				aux++;
				break;
			/*case 's':
				s = va_arg(arg, char *);
				write(1, &s, 1);
				break;
			case '%':
				c = '%';
				write(1, &c, 1);
				break;*/

			default:

				continue;
			}
		}
		i++;
	}

	va_end(arg);
	return (aux);
}