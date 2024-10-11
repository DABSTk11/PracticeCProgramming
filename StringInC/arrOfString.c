#include <stdio.h>
#include <string.h>


void stringArray();
void largestLength();
void sortArrOfString();

int main()
{
    // Demo of array of string
    stringArray();

    // Largest length strings
    largestLength();

    // Sort array of strings in ascending order
    sortArrOfString();



    return 0;
}

void stringArray()
{
    printf("\n\nDemo of string array:\n");
    printf("----------------------------\n");
    char* arr[] = {"Bar", "Remote", "Car", "Computer"};

    printf("String array Elements are:\n");

    for(int i = 0; i < 4; i++)
    {
        printf("%s\n", arr[i]);
    }
}

void largestLength()
{
    printf("\n\nLargest length of string: \n");
    printf("------------------------------------------\n");
    
    char langs[10][15] = {
        "HONDA", "TOYOTA", "FORD", "GMC", "GENESIS", "FERRARI", "LAMBORGHINI"
    };

    int length = strlen(langs[0]);
    int index = 0;

    for(int i = 0; i < 7; i++)
    {
        if(strlen(langs[i]) >= length)
        {
            length = strlen(langs[i]);
            index = i;
        }
    }

    printf("Language with the longest name: %s\nLength: %d\n", langs[index], length);
}

// sort array of string in ascending order
void sortArrOfString()
{

    printf("\n\nSort strings in ascending order: \n");
    printf("------------------------------------------\n");
    char langs[10][15] = {
        "HONDA", "TOYOTA", "FORD", "GMC", "GENESIS", "FERRARI", "LAMBORGHINI"
    };

    int i, j;
    char temp[15];

    for(i = 0; i < 6; i++)
    {
        for(j = i + 1; j < 7; j++)
        {
            if(strcmp(langs[i], langs[j]) > 0)
            {
                strcpy(temp, langs[i]);
                strcpy(langs[i], langs[j]);
                strcpy(langs[j], temp);
            }
        }
    }

    for(i = 0; i < 7; i++)
    {
        printf("%s\n", langs[i]);
    }
}