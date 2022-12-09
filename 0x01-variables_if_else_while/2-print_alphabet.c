#include<stdio.h>
/**
 * main - Entry point
 * printing lowercase alphabets
 * Return: zero success
 */
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
