#include <stdio.h> 
#include <cs50.h> 

int cube(int n); 

int main(void)
{ 
    printf("Give me a number: "); 
    int num = get_int(); 
    int r = cube(num); 
    printf("The cube is %d\n", r); 
}

int cube(int n)
{ 
    int result = n * n * n; 
    return result; 
}