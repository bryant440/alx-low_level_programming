#include<stdio.h>
/**
 * main - start your program
 * only use putchar to write 0-9
 * Return: zero for success
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
