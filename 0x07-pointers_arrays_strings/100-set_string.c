#include "main.h"
/**
 * set_string - Set the value of a pointer to a char.
 * this function takes a pointer to pointer to char and pointer
 * to a char as an argument
 * @s: a pointer to a pointe to char.
 * @to: pointer to char to set value to.
 *
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
