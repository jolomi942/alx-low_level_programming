#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabets;
	char CAPS;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (CAPS = 'A'; CAPS <= 'Z'; CAPS++)
		putchar(CAPS);
	putchar('\n');
	return (0);
}
