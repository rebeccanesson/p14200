#include <stdio.h> 
#include <cs50.h> 

int main(void)
{
    int num_rows; 
    do 
    {
        num_rows = get_int("How many rows? "); 
    } while (num_rows <= 0 || num_rows > 12); 
    
    int num_cols; 
    do 
    {
        num_cols = get_int("How many columns? "); 
    } while (num_cols <= 0 || num_cols > 12);
    
    for (int r = 0; r < num_rows; r++)
    { 
        for (int c = 0;  c < r; c++)
        {  
            printf("#"); 
        }
        printf("\n"); 
    }
}