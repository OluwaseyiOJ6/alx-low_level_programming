#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : always 0 (Success)
 */

int main(void)
{
	char lower; char upper

	for (lower = 'a'; lower <= 'z', lower++, upper = 'A'; upper <= 'Z', upper++)
		putchar(lower); putchar(upper);
	putchar('\n');
	return (0);
}
