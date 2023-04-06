#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - array of binary converted to u.int.
 * @b: pointer to a string of 0 and 1 characters.
 *
 * Return: converted number/ 0 if there is one/more chars
 * in the string b that aren't 0/1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int finalValue = 0;
	const char *p = b;

	if (b == NULL)
		return (0);
	while (*p != '\0')
	{
		if (*p != '0' && *p != '1')
			return (0);
		p++;
	}
	while (*b != '\0')
	{
		finalValue = finalValue << 1;
		finalValue |= (*b++ - '0');
	}
	return (finalValue);

}
