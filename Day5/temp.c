#include <stdio.h>
#include <cs50.h> 
#include <string.h>

int main(void) 
{ 
    
    // declare an array
    // <datatype> <name>[<size>];
    float temperature[3]; 
    
    // initialize
    temperature[0] = 60.5; 
    temperature[1] = 75.0; 
    temperature[2] = 32.6; 
    
    // iterating over the array
    // using bracket syntax to access array at indices
    for(int i = 0; i < 3; i++) 
    { 
        printf("%f\n", temperature[i]); 
    }
    
    // declare and initialize an array statically
    string chickens[] = {"Uniqua", "Rainbow", "Trip", "Trip", "Trip", "Owl"};
    
    for(int i = 0; i < 6; i++)
    { 
        printf("%s\n", chickens[i]);    
    }
    
    string chick = chickens[0]; 
    int len = strlen(chick); 
    for (int i = 0; i < len; i++) { 
        printf("Gimme an %c!\n", chick[i]);   
    }
 
}