#include "main.h"

void (*get_case(const char *format, int i))(char *buff, va_list valist)
{
	int j = 0;
	printf_t ops[] = {
		{"c", function_char},
		{"s", function_s},
		{"d", function_int},
		{"i", function_int},
		{NULL, NULL}};

	while (ops[j].printf != NULL)
	{
		if (format[i + 1] == *ops[j].printf)
		{
			return (ops[j].f);
		}
		j++;
	}
	return (NULL);
}
