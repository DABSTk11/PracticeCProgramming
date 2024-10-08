#include <stdio.h>
#include <stdlib.h>

int main()
{  
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    // if mmemory cannot be allocated
    if(ptr == NULL)
    {
        printf("Error! Memory not allocated");
        exit(0);
    }
    else
    {
        
        printf("Enter elements: ");
        for(i = 0; i < n; ++i)
        {
            printf("%p = ", ptr + i);
            scanf("%d", ptr + i);
            
            sum += *(ptr + i);
        }

        printf("Sum = %d", sum);

        //deallocating the memory
        free(ptr);
        return 0;
    }


}