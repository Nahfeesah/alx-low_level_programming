#include <stdio.h>
/**
 * main-print all alphabet except q and e
 * Return: Always 0
 */
int main(void)
{
	char la, e, q;

	e = 'e';
	q = 'q';

	for (la = 'a'; la < 'Z'; la++)
	{
		if (la != e && la != q)
			putchar(la);
	}
	putchar('\n');
	return (0);
}
