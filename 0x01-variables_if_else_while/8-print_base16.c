#include<stdio.h>
/**
 * main - start the program
 * print all exadecimal
 * Return: success 0
 */
int main(void)
{
	int x;
	char y;

	for  (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
