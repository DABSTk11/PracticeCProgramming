#include <stdio.h>


int main()
{

    int x = 10;

    int* p = &x;
    int** pp = &p;

    printf("%d\n", x);
    printf("%p \n", p);
    printf("%p \n", pp);

    if(**pp == x)
    {
        printf("We are equivalent!\n\n");
    }

    printf("The value of: %d - %d - %d\n", x, *p, **pp);

    x = 20;
    printf("The value of: %d - %d - %d\n", x, *p, **pp);

    *p = 25;
    printf("The value of: %d - %d - %d\n", x, *p, **pp);

    **pp = 30;
    printf("The value of: %d - %d - %d\n",x, *p, **pp);



}