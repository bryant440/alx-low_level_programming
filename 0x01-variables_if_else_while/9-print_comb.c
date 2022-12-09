#include<stdio.h>
/**
 * main - starting point
 * numbers separated by spaces and commas
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
