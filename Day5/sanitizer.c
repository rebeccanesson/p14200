#include <stdio.h> 
#include <cs50.h> 
#include <string.h> 

char safe_char(int input); 

int main(void)
{ 
    string blacklist[] = { "Shazbot", "Minkle", "Blurgh", "Schmaltz" };
    
    // example of generating a string of safe characters
    int len = strlen(blacklist[1]); 
    for (int i = 0; i < len; i++)
    { 
        if (i == 0 || i == len -1) 
        { 
            printf("%c", blacklist[1][i]); 
        }
        else 
        { 
            printf("%c", safe_char(blacklist[1][i])); 
        }
    }
    printf("\n"); 
}

char safe_char(int input)
{ 
    static string safe = "!@#$*%"; 
    return safe[input % strlen(safe)]; 
}
