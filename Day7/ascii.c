#include <stdio.h> 

int main(void)
{ 
    for (char c = 'a'; c <= 'z'; c++) 
    { 
        printf("%c %3d %3d\t%c %3d %3d\n", c, c, c - 'a' + 1, c - ('a' - 'A'), c - ('a' - 'A'), c - 'a' + 1); 
    }
    
}