#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main-entry
 * Return:Always(0)Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is a positive number \n", n);
	else if (n < 0)
		printf("%d is a negative number \n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
