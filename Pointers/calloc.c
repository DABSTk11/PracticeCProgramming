#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This pointer will hold 
    // base address of the block created
    int* ptr;
    int n, i;

    //Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);

    //Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));

    //Check if the memory hsa been successfully 
    // allocated by calloc or not
    if(ptr == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");

        // Get the element of the array
        for(i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");

        for(i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }

        printf("\n");
        // if I want no " , " after the last element run till
        // the second last element and print the last element separately
        // outside the loop

        printf("Without ',' at the end\n");
        for(i = 0; i < n - 1; i++)
        {
            printf("%d, ", ptr[i]);
        }
        printf("%d\n", ptr[i]);
        return 0;
    }
}