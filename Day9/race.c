#include <stdio.h>
#include <cs50.h>

void printarr(int values[], int n);
void bubble(int values[], int n);
void insertion(int values[], int n);
void selection(int values[], int n);
void merge(int values[], int n);

int main(void)
{
    int arr[] = { 10, 5, 8, -3, 7, 6, 6, 2 };
    printarr(arr, 8);
    bubble(arr, 8);
    printarr(arr, 8);

}

// Sorts array of n values using bubble sort
void bubble(int values[], int n)
{
    return;
}

// Sorts array of n values using selection sort
void selection(int values[], int n)
{
    return;
}

// Sorts array of n values using insertion sort
void insertion(int values[], int n)
{
    return;
}

void printarr(int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d ", values[i]);
    }
    printf("\n");
}
