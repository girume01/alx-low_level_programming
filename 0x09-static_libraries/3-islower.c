#include "main.h"

/**
 *_islower - checks if c is lowercase character
 *
 *main - return 1 if c is lowercase else return 0
 *@c: character to check
 * Return: return by 1 or 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}
