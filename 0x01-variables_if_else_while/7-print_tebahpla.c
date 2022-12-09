#include<stdio.h>
/**
 * main - starting point of the program
 * print lowercases in reverse order
 * Return: zero
 */
int main(void)
{
	char x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
