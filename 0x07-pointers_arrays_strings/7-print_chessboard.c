#include "main.h"
/**
 * print_chessboard - print a chessboard 8x8 represented
 * @a: 2d array representing
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int y, z;

	for (y = 0; y < 8; y++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[y][z]);
		}
		_putchar('\n');
	}
}
