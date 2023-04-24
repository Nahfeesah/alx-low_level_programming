#include <stdio.h>
/**
 * main-print all alphabet except q and e
 * Return: Always 0
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 'a'; i < 'Z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
