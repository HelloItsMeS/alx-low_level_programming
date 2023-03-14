#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: the size of the array
 * @c: chars
 * Return: NULL if zize is 0 or pointer to the array is 0
 * else returns pointer to the first element in the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab;

	if (size == 0)
		return (NULL);

	tab = malloc(sizeof(c) * size);

	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = c;

	return (tab);
}

