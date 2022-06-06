#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (when succesful)
 */
int main(void)
{
	int i = '0';
	char j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
