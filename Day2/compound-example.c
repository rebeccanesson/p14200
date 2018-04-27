#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    
    // P(1+r/n)^t*n
    
    // Ask the user for the principal
    printf("Please enter the principal: "); 
    float p = get_float();
    
    // Ask the user for the interest rate
    printf("Please enter the interest rate: "); 
    float r = get_float(); 
    
    // Ask the user for the time in years
    printf("How long will it be compounded: "); 
    int t = get_int(); 
    
    // Compute the result
    // P(1+r)^t
    float result; 
    result = p * pow(1 + r,t);
    
    // Display the result to the user
    printf("You will have $%.2f\n", result);
}