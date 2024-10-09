#include <stdio.h>

#define MAX 5


void useScanf(char[]);
void useGets(char[]);
void useFgets(char[]);


int main()
{
    char str[MAX];

    // reading with gets()
    useGets(str);

    // reading with fgets();
    useFgets(str);

    // rading with scanf()
    useScanf(str);


    return 0;
}

void useScanf(char str[])
{
    //reading string
    printf("Enter a word: ");
    scanf("%s", str);   // This won't read after the space or after the newline character

    // printing string
    printf("Using scanf : %s\n", str);
}

void useGets(char str[])
{
    //reading string
    printf("Enter a word: ");
    gets(str);

    // printing string
    puts(str);
}

void useFgets(char str[])
{
    // reading string
    printf("Enter a word: ");
    fgets(str, MAX, stdin);

    // print string
    puts(str);

}