#include <stdio.h>

int main()
{

    int array[5] = {1, 2, 3, 4, 5};
    int* p = array;   // array is a pointer so need of "&" address operator

    printf("Printing array elements\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d (%p)\n", *(p+i), (p+i));
    }

    return 0;

}