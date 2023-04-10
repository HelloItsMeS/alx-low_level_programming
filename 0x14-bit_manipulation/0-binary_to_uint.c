#include "main.h"

#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts binary numbers to unsigned int
 * @b: string containing the binary numbers
 *
 * Return: the converted numbers
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	size_t n = strlen(b);

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = pow(2,n-1) * (b[i] - '0') + result;
		n--;
		i++;
	}

	return (result);
}
