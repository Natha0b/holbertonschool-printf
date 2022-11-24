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
 * @buff: pointer char
 * @valist: argument
 */

void function_int(char *buff, va_list valist)
{
	int n, counter, div;
	unsigned int tmp;
	int len = _strlen(buff);

	(void)buff;
	counter = 1;
	div = 1;
	n = va_arg(valist, int);

	if (n < 0)
	{
		buff[len] = '-';
		tmp = n * -1;
		counter++;
		len++;
	}
	else
		tmp = n;

	while (tmp / div > 9)
		div *= 10;

	while (div != 0)
	{
		buff[len] = tmp / div + '0';
		tmp %= div;
		div /= 10;
		counter++, len++;
	}
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
	if (s == 'c' || s == 's' || s == 'd' || s == 'i' || s == '%' || s == 'b')
	{
		return (1);
	}

	return (0);
}
/**
 * function_binary - function binary
 * @buff: variable pointer char
 * @valist:
 */
void function_binary(char *buff, va_list valist)
{
	int num, i = 0, counter = 0;
	char bin[50], residue;

	num = va_arg(valist, int);

	while (num != 0)
	{
		residue = '0' + (num % 2);
		bin[i] = residue;
		i++;
		num /= 2;
		counter++;
	}
	i = 0;
	while (i < counter)
	{
		buff[i] = bin[counter - i - 1];
		i++;
	}
}