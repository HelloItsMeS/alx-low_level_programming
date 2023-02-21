#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Function
 * Description: get the last value of number
 * @c: the giving value
 * Return: the value.
 */

int print_last_digit(int c)
{
	int last_number;	
	if (c == INT_MIN)
	{
		last_number = 8;
	}
	else if (c < 0)
	{
		c = -c;
		last_number = c % 10;
	}
	else
	{
		last_number = c % 10;
	}
	_putchar(last_number + '0');
	return (last_number);
}
