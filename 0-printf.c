#include "main.h"

/**
 *_printf- print a variable
 *@format: variable printf
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list valist;
	char *buff;
	int i = 0, aux = 0, len = 0;

	va_start(valist, format);

	buff = malloc(1024);

	if (!format || !buff || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0') /*string until different from null*/
	{
		if (format[i] != '%')
		{
			buff[aux] = format[i];
			aux++;
		}

		if (buff[aux] == '%') /*when string equals percentage*/
		{
			get_case(format, i, valist, aux);
			aux++;
		}
		i++;
	}
	len = _strlen(buff);
	write(1, buff, len);

	va_end(valist);
	free(buff);
	return (aux);
}
