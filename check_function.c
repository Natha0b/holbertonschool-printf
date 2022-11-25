#include "main.h"

/**
 * check_case - prints the integer
 * @s: variable char
 * Return: integer
 */

int check_case(char s)
{
	if (s == 'c' || s == 's' || s == 'd' || s == 'i'
		|| s == '%' || s == 'b' || s == 'r')
	{
		return (1);
	}

	return (0);
}
