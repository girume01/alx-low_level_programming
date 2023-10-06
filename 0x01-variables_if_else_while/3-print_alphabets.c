#include <stdio.h>

/**
 * main - a program that prints alphabet
 *
 * Return: always 0
 */

int main(void)
  {
	   printf("a-z A-Z\n");
		  for (char i = 'a'; i <= 'z'; i++)
		       	{
				        printf("%c", i);
					    }
			    for (char i = 'A'; i <= 'Z'; i++)
			    {
				            printf("%c", i);
					        }
			        printf("\n");

				    return (0);
	}

