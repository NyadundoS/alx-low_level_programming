#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 * Return: 0 (when successful)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
