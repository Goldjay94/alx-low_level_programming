#include "main.h"
/**
 * _isupper - function that checks for uppercase characters
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c > 65 && c < 90)
		return (1);
	return (0);
}
