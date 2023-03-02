#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = _strlen(dest), i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + dest_length) = *(src + i);

		i++;
		dest_length++;
	}

	*(dest + dest_length) = '\0';

	return (dest);
}
