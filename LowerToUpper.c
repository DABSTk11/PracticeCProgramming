#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char* sptr);

int main()
{
    char string[] = "characters and $32.98";    // initialize char array

    printf("The string before conversion is: %s", string);
    convertToUppercase(string);
    printf("\n The string after conversion is: %s\n", string);

    return 0;   // indicates successful termination
}

// convert string ro uppercase letters
void convertToUppercase(char* sptr)
{
    while(*sptr != '\0')
    {
        if(islower(*sptr))  // if character is lowercase
        {
            *sptr = toupper(*sptr);     // convert to uppercase
        }
        ++sptr; //move pointer to the next character
    }

}   // end function convertToUppercase