#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 * Return: 0 (when successful)
 */
int main(void)
{
	char c = '2';

	while (c >= '9')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
