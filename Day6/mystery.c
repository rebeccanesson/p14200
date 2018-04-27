#include <stdio.h>
#include <cs50.h> 

bool mangle(int y, int x); 
void doodle(int a, int b); 
int boggle(int x, int f);
int fuzzle(int x);
int pizzazz(int x);

int main(void)
{ 
    printf("Try to win the prize!\n"); 
    printf("Enter a number: "); 
    int x = get_int();
    printf("Enter another number: "); 
    int y = get_int(); 
    if (mangle(x, y)) { 
        printf("You win a prize of $1000!\n"); 
    } else { 
        printf("You lose. Try again.\n"); 
    }
}

bool mangle(int y, int x) 
{ 
    if (y % 3 == 0) { 
        doodle(x, y); 
        return boggle(y, x) == x; 
    } else if (y % 3 == 1) { 
        int z = fuzzle(y); 
        return z == x; 
    } else { 
        doodle(y, x); 
        return pizzazz(y) == x; 
    }
}

void doodle(int a, int b) 
{ 
    int c = a; 
    a = b; 
    b = c; 
}

int boggle(int x, int f) 
{ 
    f = x * x;
    x = f; 
    return x; 
}

int fuzzle(int x) 
{ 
    int z = 6; 
    int j = z + x; 
    z = x; 
    j = x + 3 + (2 * z); 
    return j; 
}

int pizzazz(int x) 
{ 
    int q = x - 1; 
    return boggle(x, x) - boggle(q, x); 
}


