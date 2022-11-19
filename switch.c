#include "main.h"

int get_case(const char *format, int i, va_list valist, int aux,
			 int count, ...)
{
	char c;

	switch (format[i + 1]) /*start of printf structure*/
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
		aux++;
		i++;
		break;
	default:

		count++;
		_putchar('%');

		break;
	}
	return (count);
}
