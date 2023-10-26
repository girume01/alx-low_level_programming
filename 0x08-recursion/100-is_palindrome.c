#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * finder - helper function to check if a string is palindrome
 * @s: string to check
 * @begin: starting index
 * @end: ending index
 *
 * this function checks if the characters in the given string form a palindrome
 * by comparing the characters at the start and end indicates recursively
 *
 * Return: 1 if it is palindrome, 0 if it is not
 */
int finder(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (s[begin] != s[end])
	{
		return (0);
	}
	return (finder(s, begin + 1, end - 1));
}
/**
 * is_palindrome - check if string is palindrome or not.
 * @s: the input string to be checked.
 * Return: 1 if it is palindrome, 0 if it is not a palindrome
 */
int is_palindrome(char *s)
{
	int y;

	y = strlen(s);
	return (finder(s, 0, y - 1));
}
