#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) calloc(n1, sizeof(int));

    printf("Address of preiously allocated mameory.\n");

    for(i = 0; i < n1; ++i)
    {
        printf("%pc\n", ptr + i);
    }

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // reallocating memory
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Address of newly allocated mmeory:\n");

    for(i = 0; i < n2; i++)
    {
        printf("%pc\n", ptr + i);
    }

    free(ptr);

    return 0;

}