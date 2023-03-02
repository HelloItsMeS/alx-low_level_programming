#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int len1; /* string length for src */
	int len2; /* string length for dest */
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	if (n <= len1)
	{
	for (i = 0; i <= n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	}
	return (dest);
}
