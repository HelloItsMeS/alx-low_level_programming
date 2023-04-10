#include "main.h"

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

		if (!b)
			return (0);

		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
						return (0);
				result = 2 * result + (b[i] - '0');
				i++;
		}

		return (result);
}
