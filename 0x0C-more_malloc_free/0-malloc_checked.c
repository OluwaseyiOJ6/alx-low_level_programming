#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: returns pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *s;
	
	s = malloc(b);
	
	if (s == NULL)
		exit(98);
	
	return (s);
}
