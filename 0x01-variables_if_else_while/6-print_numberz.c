#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	putchar(numbers + '0');
	putchar('\n');
	return (0);
}
