#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar(i + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
