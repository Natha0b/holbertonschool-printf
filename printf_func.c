#include "main.h"

/**
 * function_char - prints the char
 * @valist: argument
 * Return: One
 */
void function_char(char *buff, va_list valist)
{
	char s;
	int len = _strlen(buff);
	s = va_arg(valist, int);
	buff[len + 1] = s;
}

/**
 * function_int - prints the char
 * @valist: argument
 * Return: One
 */

void function_int(char *buff, va_list valist)
{
	buff[0] = va_arg(valist, int);
}

/**
 * function_s - prints the integer
 * @valist: argumets
 * Return: One
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
