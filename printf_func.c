#include "main.h"

/**
 * function_char - prints the
 * @buff: variable char
 * @valist: argument
 */
void function_char(char *buff, va_list valist)
{
	char s;
	int len = _strlen(buff);

	s = va_arg(valist, int);
	if (!s)
	{

		write(1, "\0\0", 2);
		free(buff);
		exit(0);
	}
	buff[len] = s;
}

/**
 * function_int - prints the char
 * @buff: variable char
 * @valist: argument
 */

void function_int(char *buff, va_list valist)
{
	buff[0] = va_arg(valist, int);
}

/**
 * function_s - prints the integer
 * @buff: variable char
 * @valist: argumets
 */

void function_s(char *buff, va_list valist)
{
	char *s, *null = "(null)";
	int i;

	int len = _strlen(buff);

	s = va_arg(valist, char *);
	if (s == NULL)
	{
		for (i = 0; null[i] != '\0'; i++, len++)
		{
			buff[len] = null[i];
		}
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++, len++)
		{
			buff[len] = s[i];
		}
	}
}

/**
 * function_percent - prints the integer
 * @buff: variable char
 * @valist: argumets
 */

void function_percent(char *buff, va_list valist)
{
	int len = _strlen(buff);
	(void)valist;
	buff[len] = '%';
}
/**
 * check_case - prints the integer
 * @s: variable char
 * Return: integer
 */

int check_case(char s)
{
	if (s == 'c' || s == 's' || s == 'd' || s == 'i' || s == '%')
	{
		return (1);
	}

	return (0);
}
