#include <stdio.h>

int pointerFunction();
int* larger(int*, int*);

// another way 
int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int result;
    
    // declare pointer to a function
    int (*ptr)();

    // assign address of function to pointer
    // OR point to the address of function
    ptr = &pointerFunction;

    // deference the pointer and assign value to the results variable
    result = (*ptr)();

    printf("The sum is %d \n\n", result);



    // Another way of function pointer in c
    printf("Another way of Fucntion Ponter in C\n");

    // Declare function pointer
    int(*subPtr)(int, int);

    // Assign the function tot he declared pointer
    subPtr = subtract;
    printf("The subtraction of two numbers: %d\n\n", subPtr(7, 4));



    // Returning pointer from a function
    printf("Returning pointer from a function\n");

    //declare a pointer to store the returned value
    int* p;
    int x = 10;
    int y = 89;
    p = larger(&x, &y);

    printf("%d is larger\n\n", *p);

    return 0;

}

// this function returns the additon of two numbers
int pointerFunction()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    return a + b;
}

// Function returnning pointer

int* larger(int* x, int* y)
{
    if(*x > *y)
    {
        return x;
    }
    else{
        return y;
    }

}