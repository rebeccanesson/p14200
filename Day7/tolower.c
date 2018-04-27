#include <stdio.h> 
#include <cs50.h> 
#include <string.h> 

char to_lower(char c); 

int main(int argc, string argv[])
{ 
    if (argc != 2) { 
        printf("Usage: ./tolower <string>\n"); 
        return 1; 
    }
    
    string s = argv[1]; 
    int len = strlen(s); 
    for (int i = 0; i < len; i++) { 
        s[i] = to_lower(s[i]);    
    }
    printf("%s\n", s); 
}

char to_lower(char c)
{ 
    if (c >= 'A' && c <= 'Z') 
    { 
        c = c + ('a' - 'A');     
    }
    return c; 
}