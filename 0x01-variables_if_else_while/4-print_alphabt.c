#include<stdio.h>
/**
 * main - starting point
 * prit lowercases but escape some
 * Return: zero
 */
int main(void)
{
	char x;

	for (x = 97; x <= 122; x++)
	{
		if (x == 101 || x == 113)
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
