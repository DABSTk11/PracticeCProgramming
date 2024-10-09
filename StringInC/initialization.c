#include <stdio.h>
#include <string.h> // Library for strings operations


int main()
{
    // declare and initiaize string
    char str[] = "Hello";

    // print string
    printf("%s\n", str);
    int length = 0;
    length = strlen(str);

    // displaying the length of string
    printf("Length of the string is: %d\n", length);

    return 0;
}
