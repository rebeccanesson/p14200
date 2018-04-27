#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    int num1;
    num1 = get_int();
    
    int num2 = num1 + num1;
    
    printf("The number is %d. If you can't remember it is %d\n", num2, num2);
}