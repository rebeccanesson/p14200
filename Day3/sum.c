#include <stdio.h>
#include <cs50.h>

int main(void)
{ 
    int target = 10; 
    int sum = 0; 
    for (int i = 0; i <= target; i++) 
    { 
        sum = sum + i; 
    }
    
    printf("The sum from 0 to %d is %d\n", target, sum); 
    
    int sum2 = 0;
    int i = 0; 
    while (i <= target) 
    { 
        sum2 = sum2 + i; 
        i = i+1; 
    }
    
    printf("The sum from 0 to %d is %d\n", target, sum);
}