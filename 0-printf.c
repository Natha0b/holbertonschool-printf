#include "main.h"

/**
 *_printf- function printf
 *@format: variable printf string
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list valist;
	char *buff;
	int i = 0, aux = 0, len = 0;

	va_start(valist, format);

	buff = malloc(300);
	{
		return (-1);
	}
	while (format[i] != '\0') /*string until different from null*/
	{
		if (format[i] != '%')
		{
			buff[aux] = format[i];
			aux++;
		}
		if (format[i] == '%' && check_case(format[i + 1]) == 1)
		{
			get_case(format, i)(buff, valist);
			i++;
			aux = _strlen(buff);
		}
		else if (format[i] == '%')
		{
			buff[aux] = format[i];

			buff[aux + 1] = format[i + 1];
			aux++;
		}

		i++;
	}
	len = _strlen(buff);
	write(1, buff, len);
	va_end(valist);
	free(buff);
	return (len);
}
