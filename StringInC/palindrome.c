#include <stdio.h>
#include <string.h> 

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int len, startIndex, endIndex;

    /*Input string from user*/
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    /*
    using fgets(), the input string will often include a newline character (\n) if the user presses Enter. 
    This newline character needs to be removed before checking if the string is a palindrome, as it can incorrectly affect the result.
    You can remove the newline character by replacing it with the null terminator (\0). This can be done right after reading the input with fgets().

    */
    //str[strcspn(str, "\n")] = '\0';

    /*Find length of the string*/
    len = 0;
    while(str[len] != '\0')
    {
        
        len++;
    }
    int flag = 0;
    if(str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        flag = 1;
    }

    startIndex = 0;
    if(flag == 1)
    {
        endIndex = len - 2;
    }
    else
    {
        endIndex = len - 1;
    }
    

    while(startIndex <= endIndex)
    {
        if(str[startIndex] != str[endIndex])
        {
            break;
        }
        startIndex++;
        endIndex--;
    }

    if(startIndex >= endIndex)
    {
        printf("String is palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;

}