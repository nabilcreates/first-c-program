#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Create an array
    int array[] = {10,20,30,29,39,29,392,1213,23,99};
    
    // For loop that iterates over the array
    // sizeof(array) returns the bytes of memory. so if there are 10 elements, and 1 int is 4 bytes, it will store 40 bytes. and sizeof will return 40 bytes

    // sizeof(array[0]) returns an int of the size of the type of the first value of array, meaning that if array[0] is an int, it will return 4 because int is 4 bytes

    // so if we take the total bytes of data (40) and we divide it by the size of the type (4), we will get 10, meaning that there is 10 ints in the array.
    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        // Print the address (pointer) and the value
        printf("Address: %p\nValue: %i\n\n", &array[i], array[i]);
    }

    return 0;
}