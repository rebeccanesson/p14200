#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int timer; 
    char first_initial;
    
    timer = get_int("What is the time? "); 
    first_initial = get_char("What is the initial? "); 
    
    float temp = 78.5; 
    int degree = temp; 
    timer = timer + 12; 
    
    printf("The time is %d\n", timer);
    printf("The first initial is %c\n", first_initial); 
    printf("Temp is %.2f\n", temp); 
}