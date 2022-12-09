#include<stdio.h>
/**
 * main -  starting point of the program
 * write the lowercase followed by uppercase
 *Return: 0 for success
 */
int main(void)
{
	char x, y;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	for (y = 65; y <= 90; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
