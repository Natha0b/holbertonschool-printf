#include "main.h"

/**
 * function_char - prints the char
 * @arg: args
 */
int function_char(va_list valist)
{
	_putchar(va_arg(valist, int));
	return (1);
}


/*
/**
 * function_s - prints the integer
 * @arg: args
 */
/*
void function_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	_putchar("%s", s);
}
*/
/**
 * function_percentage - prints the percent
 * @arg: arg
 */
/*
void function_percentage(va_list arg)
{
	_putchar("%%", va_arg(arg, int));
}
*/
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
/*
int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/
/**
 * _putchar - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
/*
int _putchar(char *s)
{
	return (write(1, &s, 1));
}
*/
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
/*
int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/