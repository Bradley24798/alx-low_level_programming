#include "main.h"
/**
 *_isalpha - checks if the character is alphabeic
 *@c: the character being checked
 *Return: 1 for letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
