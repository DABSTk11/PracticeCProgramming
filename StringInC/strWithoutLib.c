#include <stdio.h>

void lengthOfString(char str[], int);
void individualChar(char str[], int);
void individualCharReverse(char str[], int);
void countWord(char str[], int);

int main()
{
    char str[100];
    int i = 0;

    printf("Input the string: ");
    fgets(str, sizeof str, stdin);

    // Length of string
    lengthOfString(str, i);

    // Individual characters from a string
    individualChar(str, i);

    // Individual characters from a string in reverse order
    individualCharReverse(str, i);

    // Word counter to count the number of words in a string
    countWord(str, i);


}

void lengthOfString(char str[], int i)
{
    printf("\n\nFind the length of a string: \n");
    printf("--------------------------------\n");
    

    while(str[i] != '\0')
    {
        i++;
    }
    
    /*While loop runs till the null character, so the value of i will be till the null character
    When getting a string we don't count the null character so we have to remove last element
    // that is why we use i - 1(meaning don't include the null character)*/

    printf("Length of the string typed is: %d\n", i - 1); 
}

void individualChar(char str[], int i)
{

    printf("\n\nSeparate the individual characters from the string: \n");
    printf("--------------------------------------\n");
    printf("The characters of string are: \n");


    while(str[i] != '\0')
    {
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");

}

void individualCharReverse(char str[], int i)
{
    printf("\n\nSeparate the individual characters from the string in a reverse order\n");
    printf("------------------------------------------------\n");
    printf("The characters of string in reverse order are: ");

    // Use strlen OR below
    //int size = strlen(str); // need <string.h> header file

    while(str[i] != '\0')
    {
        i++;
    }

    int size = i - 1;
    while(size >= 0)
    {
        printf("%c ", str[size]);
        size--;
    }
    printf("\n");
}

void countWord(char str[], int i)
{
    int wordCounter = 0;

    printf("\n\nCount the tottal number of words in a string: \n");
    printf("--------------------------------------------------\n");

    while(str[i] != '\0')
    {
        // check if the current character is white space
        if(str[i] == ' ')
        {
            wordCounter++;
        }
        i++;
    }

    /*When counting a words, at last words there won't come a space after it, so the wordCounter won't increase
    for that we need to add 1 in the wordCounter*/
    printf("Total number of words in the string is: %d\n", wordCounter + 1);    

}