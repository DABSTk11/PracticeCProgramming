#include <stdio.h>

void change_arg(int* y);

int main()
{
    int x = 5;

    printf("Before void function call : %d \n", x);

    change_arg(&x); // Pass variable address to the function

    printf("After void function call: %d \n", x);

}

void change_arg(int* y)
{
    *y = *y + 1;    // deference y and get the value and increase value by 1.
}