#include <stdio.h>
#include <cs50.h>

void init(char board[3][3]);
bool game_over(char board[3][3]);
void print(char board[3][3]);
bool move(char board[3][3], char player, int row, int col);

int main(void)
{
    printf("Welcome to Tic Tac Toe.\n");

    char board[3][3];

    init(board);

    char player = 'X';

    while (!game_over(board))
    {
        print(board);

        int mrow;
        int mcol;
        do
        {
            mrow = get_int("Player %c, choose your row (0-2): ", player);
            mcol = get_int("Player %c, choose your col (0-2): ", player);
        } while (!move(board, player, mrow, mcol));
    }

}

void init(char board[3][3])
{
    // TO DO 
}

void print(char board[3][3])
{
    // TO DO
}

bool game_over(char board[3][3])
{
    return false; 
}

bool move(char board[3][3], char player, int row, int col)
{
    return true; 
}