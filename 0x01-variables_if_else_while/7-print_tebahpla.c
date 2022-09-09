#include <stdio.h>
/**
 * main- main block
 * description- use 'putchar' to print reverse lower case alphabate
 * Return: 0
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
