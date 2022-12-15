#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * REturn: Always 0 (success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	/*code goes here*/

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
