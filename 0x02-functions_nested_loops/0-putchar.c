#include "main.h"
#include <stdio.h>

/**
 * main - describes the main function for this program
 *
 * Return: returned by zero
 */

int main(void)
{
	char text[] = "_putchar\n";
	write(1, text, sizeof(text) - 1);
	return (0);
}
