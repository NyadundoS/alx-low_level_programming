#include<stdio.h>
#include<unistd.h>
/**
 * main - print "and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILE NO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
