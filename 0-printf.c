#include "main.h"

/**
 *_printf- print a variable
 *@format: variable printf
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int i, aux = 0;
	int count = 0;
	char c;

	va_start(valist, format);

	if (!format)
		return (-1);

	i = 0;

	while (format[i] != '\0')
	{

		if (format[i] != '%')
		{
			_putchar(format[aux]);
			aux++;
			count++;
		}

		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				count += function_char(valist);
				aux++;
				i++;
				break;

			case 'd':
				function_int(valist);
				aux++;
				i++;
				break;

			case 's':
				count += function_s(valist);
				aux++;
				i++;
				break;

			case 'i':
				function_int(valist);
				aux++;
				i++;
				break;
		
			case '%':
				 c = '%';
				count += write(1, &c, 1);
				return (1);
				break;

			default:

				continue;
			}
			aux++;
		}
		i++;
	}

	va_end(valist);
	return (count);
}