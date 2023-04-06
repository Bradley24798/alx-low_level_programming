#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print.
 *
 * Return: 1 when succesful, -1 when there is an error
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
