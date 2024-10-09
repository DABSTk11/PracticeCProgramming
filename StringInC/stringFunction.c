#include <stdio.h>
#include <string.h>

void stringLen();
void stringCpy();
void stringCmp();
void stringCat();


int main()
{
    // String Length
    printf("\nString Length:\n");
    stringLen();

    // String Copy
    printf("\nString Copy: \n");
    stringCpy();

    // String Comparision
    printf("\nString Comparision: \n");
    stringCmp();

    // String Concatenation
    printf("\nString Concatenation: \n");
    stringCat();

    return 0;
}

void stringLen()
{
    char a[20] = "Program";
    char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

    //using the %zu format specifier ot print size_t (unsigned interger)
    printf("Length of string a = %zu\n", strlen(a));
    printf("Length of string b = %zu\n", strlen(b));
}

void stringCpy()
{
    char str1[20] = "C programming";
    char str2[20];

    // copying str1 to str2
    strcpy(str2, str1);

    printf("String 2 is: ");
    puts(str2); 
}

void stringCmp()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // Comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // Comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    // Comparing strings str2 and str3
    result = strcmp(str2, str3);
    printf("strcmp(str2, str3) = %d\n", result);

    // Just checking ASCII value of 'a' and 'A'

    // int r = 'a';
    // int j = 'A';
    // printf("a: %d\n A: %d\n", r, j);
}

void stringCat()
{
    char str1[100] = "This is ", str2[] = "programming course";

    //concatenates str1 and str2 and stores in str1
    strcat(str1, str2);

    puts(str1);
    puts(str2);
}