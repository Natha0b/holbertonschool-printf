#include "main.h"

/**
 * function_char - prints the char
 * @valist: argument
 * Return: One
 */
int function_char(va_list valist)
{
	_putchar(va_arg(valist, int));
	return (1);
}

/**
 * function_int - prints the char
 * @valist: argument
 * Return: One
 */
int function_int(va_list valist)
{
	_putchar(va_arg(valist, int) + '0');

	return (1);
}

/**
 * function_s - prints the integer
 * @valist: argumets
 * Return: One
 */

int function_s(va_list valist)
{
	char *s;
	int i;

	s = va_arg(valist, char *);
	if (s == NULL)
		s = ("(null)");
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
