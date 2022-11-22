#include "main.h"

int get_case(const char *format, ...)
{
    int i = 0, aux;
    printf_t ops[] = {
        {"c", function_char},
        {"s", function_s},
        {"d", function_int},
        {"i", function_int},
        {NULL, NULL}};

    va_list valist;

    va_start(valist, format);

    while (format != NULL && format[i] != '\0')
    {
        aux = 0;
        while (aux < 5)
        {
            if (format[i] == *ops[aux].printf)
            {
                ops[aux].f(valist);
                break;
            }
            aux++;
        }
        i++;
    }
    va_end(valist);
    printf("\n");
	return (*format);
}
