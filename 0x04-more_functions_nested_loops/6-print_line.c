#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int mo;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (mo = 1; mo <= n; mo++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
