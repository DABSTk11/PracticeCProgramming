#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define str_Size 100

void counting();
void copyString();
void countVowelOrConsonant();
void sortString();
void frequencyOfWord();

int main()
{
    // // Counting number of alphabets, digits and special character in the provide string
    // counting();

    // // Copies string 1 to string2 character by character
    // copyString();

    // // Count number of vowel and consonant in the given string
    // countVowelOrConsonant();

    // // sort string
    // sortString();

    //Frequency of the word "the"
    frequencyOfWord();
    
    return 0;

}

void counting()
{
    char str[str_Size];
    int alp, digit, splch, i;
    alp = digit = splch = 0;

    printf("\n\nCount total number of alphabets, digits and special characters: \n");
    printf("-----------------------------------------\n");
    printf("Input the string: ");
    fgets(str, sizeof str, stdin);

    /*Check each character of string*/

    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alp++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is: %d\n", alp);
    printf("Number of Digits in the string is: %d\n", digit);
    printf("Number of Special characters in the string is: %d\n\n", splch);
}

void copyString()
{
    char str1[100], str2[100];
    int i;

    printf("\n\nCopy one string to another string\n");
    printf("---------------------------------\n");
    printf("Input String: ");
    fgets(str1, sizeof str1, stdin);    // sizeof is compile-time expression giving you the sizeof type of variable


    // copy str 1 to str2

    i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    //Makes sure that the string is NULL terminated
    str2[i] = '\0';
    printf("\nThe First string is: %s\n", str1);
    printf("The Second string is: %s\n", str2);
    printf("Number of characters copied: %d\n\n", i);
}

void countVowelOrConsonant()
{
    char str[str_Size];
    int i, len, vowel, cons;

    printf("\n\nCount total number of vowel or consonant\n");
    printf("-------------------------------------\n");
    printf("Input string: ");
    fgets(str, sizeof str, stdin);

    vowel = 0;
    cons = 0;
    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z'))
        {
            cons++;
        }
    }

    printf("\nThe total number of vowel in the string is: %d\n", vowel);
    printf("The total number of consonant in the string is: %d\n\n", cons);
}

// sort string in ascending order
void sortString()
{

    char str[str_Size], ch;
    int i, j, length;

    printf("\n\nSort a string array in ascending order\n");
    printf("------------------------------------\n");
    printf("Input a string: ");
    fgets(str, sizeof str, stdin);

    length = strlen(str);

    for(i = 1; i < length; i++)
    {
        for(j = 0; j < length - i; j++)
        {
            if(str[j] > str[j+1])
            {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }

    printf("After sorting the string in ascending order: \n");
    printf("%s\n\n", str);
}

void frequencyOfWord()
{
    int ctr = 0, i, freq = 0;
    int t, h, e, space;
    char str[200];
    
    printf("\n\nFind the number of times the word 'the' in any combination appears: \n");
    printf("------------------------------------\n");

    printf("Input the string:");
    fgets(str, sizeof str, stdin);

    ctr = strlen(str);

    // counts the frequency of the word 'the' with a trailing space

    for(i = 0; i <= ctr - 3; i++)
    {
        t = (str[i] == 't' || str[i] == 'T');
        h = (str[i + 1] == 'h' || str[i + 1] == 'H');
        e = (str[i + 2] == 'e' || str[i + 2] == 'E');
        space = str[i + 3] == ' ';

        if((t && h && e && space) == 1)
        {
            freq++;
        }

        /*
        Or
        if((str[i] == 't' || str[i] == 'T') && (str[i+1] == 'h' || str[i+1] == 'H') && (str[i+2] == 'e' || str[i+2] == 'E'))
        {
            freq++;
        }
        */
    }

    printf("The frequency of the word \'the\' is : %d\n\n", freq);
}

