#include <stdio.h>

void swap(int*, int*);

int main()
{
    int a = 9;
    int b = 4;

    printf("a: %d b: %d\n", a, b);

    swap(&a, &b);

    printf("a: %d b: %d\n", a, b);

    return 0;

}


// Swap method changes the actual memory addresses
// of the two integer.
void swap(int* x, int* y)
{
    int temp;

    temp = *y;
    *y = *x;
    *x = temp;
}


// Swapping only happens inside this method it won't change the 
// actual memory address
// void swap(int x, int y)
// {
//     int temp;

//     temp = y;
//     y = x;
//     x = y;

//    printf("x: %d y: %d\n", x, y);
// }
