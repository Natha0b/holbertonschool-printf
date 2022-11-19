#include "main.h"

/**
 *_printf- print a variable
 *@format: variable printf
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0, aux = 0, count = 0;

	va_start(valist, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0') /*string until different from null*/
	{
		if (format[i] != '%')
		{
			_putchar(format[aux]);
			aux++;
			count++;
		}
		if (format[i] == '%') /*when string equals percentage*/
		{
			count += get_case(format, i, valist, aux, count);
			aux++;
		}
		i++;
	}
	va_end(valist);
	return (count);
}
