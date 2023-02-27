#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, r, o;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (r = 0; r < (count - 1); r++)
	{
		for (o = r + 1; o > 0; o--)
		{
			temp = *(str + o);
			*(str + o) = *(str + (o - 1));
			*(str + (o - 1)) = temp;
		}
	}
}
