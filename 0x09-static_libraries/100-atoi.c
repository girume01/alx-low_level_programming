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
	int i = 0;
	int num = 0;
	int n = 0;
	int len = 0;
	int x = 0;
	int name = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && x == 0)
	{
		if (s[i] == '-')
			++num;
		if (s[i] >= '0' && s[i] <= '9')
		{
			name = s[i] - '0';
			if (num % 2)
				name = -name;
			n = n * 10 + name;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}
	if (x == 0)
		return (0);
	return (n);
}
