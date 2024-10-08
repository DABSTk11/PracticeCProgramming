#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ptr will hold the base address of the block created
    int* ptr;
    int n, i;

    //Get the number of elements for the array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Entered number of elements: %d\n", n);

    // Dynamically allocate memory using malloc()
    ptr = (int*) malloc(n * sizeof(int));

    // check if the memory has been successfully 
    // allocated by malloc or not
    if(ptr == NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }
    else{
        // Memory has been successfully allocated
        printf("Memory successfullly allocated using malloc\n");

        // Get the elements of array
        for(i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        //Print the elements of the array
        printf("The elements of the array are: ");
        for(i = 0; i < n - 1; i++)
        {
            printf("%d, ", ptr[i]);
        }
        // Print the last element outside because I don't want " , " after my last element
        printf("%d\n", ptr[i]);
    }

    return 0;
}