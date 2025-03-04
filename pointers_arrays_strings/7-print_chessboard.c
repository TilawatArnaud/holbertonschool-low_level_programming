#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard.
 * @a: Pointer to an 8x8 array of characters.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++) // Parcourir les lignes
    {
        for (j = 0; j < 8; j++) // Parcourir les colonnes
        {
            _putchar(a[i][j]); // Afficher chaque caractère
        }
        _putchar('\n'); // Nouvelle ligne après chaque ligne de l'échiquier
    }
}