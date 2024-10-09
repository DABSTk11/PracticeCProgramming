#include <stdio.h>
#include <string.h> // for using string inbuilt function

void compare(char*, char*);

int main()
{
    char str1[] = "BAT";
    char str2[] = "BALL";

    compare(str1, str2);

    printf("\nThe new strings: \n");

    // display new strings
    puts(str1);
    puts(str2);

    printf("\n");
    compare(str1, str2);

    return 0;


}

// whenever I am using a pointer it means I am
// directly manipulating the memory addresses
void compare(char* x, char* y)
{
    int val = 1;

    // strlen = gives the integer value

    if(strlen(x) > strlen(y))
    {
        printf("\nLength of str1 is greater than or equal to the length of str2\n");
    }
    else{
        printf("\nLength of str1 is less than the length of str2\n");
    }

    // swap/interchange the strings value
    strcpy(y, "Bat");
    strcpy(x, "Doll");

}