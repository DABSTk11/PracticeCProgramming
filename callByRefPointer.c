#include <stdio.h>

void change_arg(int* y);
void callByVal(int);

int main()
{
    int x = 5;

    printf("\nCall By Reference Demo\n");

    printf("Before void function call : %d \n", x);

    change_arg(&x); // Pass variable address to the function

    printf("After void function called: %d \n", x);


    printf("\nCall By Value Demo\n");

    printf("Before void function call : %d \n", x);

    callByVal(x);

    printf("After void function is called: %d\n", x);



}

void change_arg(int* y)
{
    *y = *y + 1;    // deference y and get the value and increase value by 1.
}

void callByVal(int x)
{
    x = x + 1;
}