#include "main.h"
#include <limits.h>
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else 
			{
				return (INT_MIN);}
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
