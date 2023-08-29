#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: The 2D array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{

int r;
int b;

for (r = 0; r < 8; r++)
{

for (b = 0; b < 8; b++)
{

printf("%c ", a[r][b]);

}

printf("\n");

}

}



