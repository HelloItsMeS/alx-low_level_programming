#include <unistd.h>
/**
 * main - Starting the program
 * We wrote 58 because we want to print all the string. (58 is the length of the string)
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
