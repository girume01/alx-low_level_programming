#include "main.h"
/**
 * rev_string - reverse array
 * @n: string to be reverse
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	do 
	{
		 i++;
	 } while (*(n + i) != '\0');
	 i--;
	 do {
		 temp = *(n + j);
		 *(n + j) = *(n + i);
		 *(n + i) = temp;
		 j++;
		 i--;
	 } while (j < i);
}
/**
 * infinite_add - add two numbers
 * @n1: describes the first number
 * @n2: describes the second number
 * @r: a pointer to buffer
 * @size_r: buffer size
 * Return a pointer to call function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j--;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);

	do {
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	} while (j >= 0 || i >= 0 || overflow == 1);
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
