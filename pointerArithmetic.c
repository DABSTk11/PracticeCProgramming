#include <stdio.h>

// Pointer arithmetic moves pointer as follow
// newAddress = currentAddress + i * sizeOf(dataType)
// i = number by which poiter get increased

// for 32-bits changes by 2 bytes
// for 64-bits changes by 4 bytes

int main()
{
    int num = 50;

    int* p = &num;

    printf("Address of p variables is %u \n", p);

    p = p + 1;

    printf("After increment of pointer:\n");
    printf("Address of p varibale is %u \n", p);

    // Results 
    // Before = 1804431596
    // After = 1804431600 // changes by 4-bytes

    return 0;
}