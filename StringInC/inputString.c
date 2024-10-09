#include <stdio.h>

int main()
{
    char str[50];

    printf("\n\nAccept a string from keyboard:\n");
    printf("---------------------------\n");
    printf("Input the string: ");
    fgets(str, sizeof str, stdin);
    printf("The string you entered is: %s\n", str);

    return 0;
}