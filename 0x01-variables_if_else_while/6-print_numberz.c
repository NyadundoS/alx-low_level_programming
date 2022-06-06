#include <stdio.h>
/**
 * main - prints numbers base 10
 * Return: 0 (when successful)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
