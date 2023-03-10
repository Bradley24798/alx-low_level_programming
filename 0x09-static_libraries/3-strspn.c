#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets length of a prefix substring
 * @s: pointer to a char
 * @accept: pointer to the substring we check for
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, x, i;

	for (x = 0; s[x] != '\0' && x == count; x++)
		for (i = 0; accept[i] != '\0'; i++)
			if (s[x] == accept[i])
				count++;

	return (count);
}
