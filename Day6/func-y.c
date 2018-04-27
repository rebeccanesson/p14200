#include <cs50.h> 
#include <stdio.h> 

void swap(int a[]);

int main(void)
{ 
    
    int arr[] = { 2, 3 }; 
    
    swap(arr);
    
    printf("x is %d, y is %d\n", arr[0], arr[1]); 
}

void swap(int a[], int len)
{ 
    int temp = a[0]; 
    a[0] = a[1];  
    a[1] = temp; 
}

