#include <stdio.h>
#include <cs50.h> 

int main(void)
{ 
    printf("Please give me a number: "); 
    int num = get_int(); 
    
    if (num > 0)
    { 
        printf("Thank for being positive!\n"); 
    }
    else if (num == 0)
    { 
        printf("That's a big zero!\n");    
    }
    else
    { 
        printf("Don't be so negative!\n");     
    }
    printf("thanks for playing\n"); 
}