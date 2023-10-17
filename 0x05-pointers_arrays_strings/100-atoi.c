#include "main.h"
/**
 * _atoi - convert string to integer
 *
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int num, sign;

	num = 0;
	sign = 1;
	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
