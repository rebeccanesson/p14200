#include <stdio.h>
#include <cs50.h>
#include <sys/time.h>

void printarr(int values[], int n);
void bubble(int values[], int n);
void insertion(int values[], int n);
void selection(int values[], int n);
void merge(int values[], int n);
void fill_random_array(int values[], int n);
bool check_sorted(int values[], int n);

int main(void)
{

    // Change size to test larger arrays
    int size = 100;
    int arr[size];

    // Fill the array with random values
    fill_random_array(arr, size);

    // Set up the timer (DON'T CHANGE)
    struct timeval stop, start;
    gettimeofday(&start, NULL);

    // Pick your sort function
    bubble(arr, size);

    // Calculate time taken (DON'T CHANGE)
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);

    // Print out whether sort was successful and how long it took
    if (check_sorted(arr, size))
    {
        printf("Correctly sorted!\n");
    }
    else
    {
        printf("The sort was not successful. :(\n");
    }
    printf("time taken %f\n",secs);

}

void fill_random_array(int values[], int n)
{
    int upper = 10;
    int lower = -10;
    for (int i = 0; i < n; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        values[i] = num;
    }
}

// Sorts array of n values using bubble sort
void bubble(int values[], int n)
{

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

void merge(int values[], int n)
{


}

void printarr(int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d ", values[i]);
    }
    printf("\n");
}

bool check_sorted(int values[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if (values[i] > values[i+1])
        {
            return false;
        }
    }
    return true;
}
