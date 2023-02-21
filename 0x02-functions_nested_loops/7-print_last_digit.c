#include "main.h"

/**
 * print_last_digit - Function
 * Description: get the last value of number
 * @c: the giving value
 * Return: the value.
 */
int print_last_digit(int c)
{
	int last_number;

	if (c < 0)
	{
		c = (c * (-1));
	}
	
	last_number = c % 10;
	return (last_number);
}
