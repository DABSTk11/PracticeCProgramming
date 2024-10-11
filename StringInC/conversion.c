#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

void convertLowercase();
void convertUppercase();


int main()
{
    
    // Convert to uppercase character by character
    convertUppercase();


}

void convertLowercase()
{
    char str[MAX_SIZE];
    //gets(str);

    //Not supported by some compiler includeing my mac.

    /*
    The Function strupr():

strupr() is not a standard C library function. It's commonly available in some compilers, like Turbo C or Visual C++, 
but it's not part of the standard C library (ANSI C or ISO C). On your Mac, which uses the Clang compiler (a modern compiler), 
this function may not be available, leading to a compilation error, even if the function isn't called in your program.
Error in Unused Functions:

In C, during the compilation phase, the entire program is compiled, even the parts that aren't used or called during execution. 
Since convertLowercase() contains a non-standard function (strupr()), the compiler will raise an error regardless of whether or not the function is invoked in main().*/
    //strupr(str);

    printf("Uppercase string: %s", str);

}

void convertUppercase()
{
    // counter for the loop
    int i = 0;

    // word to convert to uppercase
    char word[] = "adMiNistraToR.mEe\n";
    char chr;

    // Loop
    while(word[i])
    {
        chr = word[i];
        printf("%c", toupper(chr));

        i++;
    }

}