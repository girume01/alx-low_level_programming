#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generate random
 * password for the program crackme
 *
 * Return: always 0(success)
 */
int main(void)
{
	int pass[100];
	int i = 0;
	int sum = 0;

	srand(time(NULL));

	while (i < 100)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 -sum) - '0' < 78)
		{
			int n = 2772 - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
		i++;
	}
	return (0);
}
