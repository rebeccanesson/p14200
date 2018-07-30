/* In a group of 5, execute this code manually. The roles are as follows: 
 * 
 * 1. The main function. The person representing the main function is responsible for allocating memory on 
 *    the main stack frame for all local variables, for doing computations that occur in main, and for 
 *    calling any functions. 
 * 2. The foo function. The person representing the foo function is responsiuble for allocating memory on the
 *    foo stack frame, doing all computations, and returning a value to the calling function. 
 * 3. The bar function. The person representing the bar funciton is responsible for allocating memory on the
 *    bar stack frame, doing all computations, and removing its stack frame when done. 
 * 4. The heap. The person representing the heap is responsible for allocating memory on the heap and giving 
 *    out addresses of that memory to functions that ask for the allocated memory. The person in charge of the 
 *    heap memory will also make modifications to values stored on the heap when requested by a function. 
 * 5. The user. The user will provide inputs to the program and provide advice/help to any other role who needs it. 
 */ 

#include <cs50.h> 
#include <stdio.h> 

int foo(int a, int arr[], int len); 
void bar(int a, int arr[], int len); 

int main(void)
{ 
    int num = get_int("Give me an int: "); 
    
    int arr[2]; 
    arr[0] = get_int("Give me another int: "); 
    arr[1] = get_int("Give me one more int: "); 
    
    num = foo(num, arr, 2);
    bar(num, arr, 2); 
    
    printf("Your numbers are %d %d and %d.\n", num, arr[0], arr[1]); 

}

int foo(int a, int arr[], int len)
{ 
    if (len > 0)
    { 
        a = a * arr[0]; 
    }
    return a; 
}

void bar(int a, int arr[], int len)
{
    for (int i = 0; i < len; i++)
    { 
        arr[i] = arr[i] * a;     
    }
}