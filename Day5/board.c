#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare 2d array to hold board
    char board[3][3] = { { '_', '_', '_' },{ '_', '_', '_' },{ '_', '_', '_' }};
    
    // initialize the array by filling it with '_'
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            board[row][col] = '_';
        }
    }
    
    // print the array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%4c", board[row][col]);
        }
        printf("\n\n");
    }
    
    // set three values into the array
    board[0][2] = 'X';
    board[1][2] = 'X';
    board[2][2] = 'X';
    
    // print the array again
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%4c", board[row][col]);
        }
        printf("\n\n");
    }
}