#include "main.h"

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
 * function_binary - function binary
 * @buff: variable pointer char
 * @valist: argumets
 */

void function_binary(char *buff, va_list valist)
{
	int len = _strlen(buff);
	unsigned int num, i = 0, counter = 0;
	char bin[200], residue;

	num = va_arg(valist, int);
	if (num == 0)
	{
		buff[i] = '0';
	}

	while (num != 0)
	{
		residue = '0' + (num % 2);
		bin[i] = residue;
		i++;
		num = num / 2;
		counter++;
	}
	i = 0;
	while (i < counter)
	{

		buff[i + len] = bin[counter - i - 1];
		i++;
	}
}
/**
 * rev_string - function reverse
 * @buff: variable pointer char
 * @valist: argumets
 */
void rev_string(char *buff, va_list valist)
{
	int len = _strlen(buff);
	int cont = 0;
	int x;
	char *s;

	s = va_arg(valist, char *);
	while (s[cont] != '\0')
	{
		cont++;
	}

	for (x = 0; x < cont; x++)
	{

		buff[x + len] = s[cont - 1 - x];
	}
}
