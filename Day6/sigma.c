#include <stdio.h> 
#include <cs50.h> 

int sigma(int n); 

int main(void)
{ 
    printf("give me an int; "); 
    int x = get_int(); 
    int result = sigma(x); 
    printf("sigma of %d is %d\n", x, result); 
}

int sigma(int n)
{ 
    if (n == 1) { 
        return 1; 
    } else { 
        return n + sigma(n - 1); 
    }
}