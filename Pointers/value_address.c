#include <stdio.h>
int main () {
    int a = 10;
    int *p = &a;

    printf("Value of a is %d\n",a);
    printf("Address of a is %p\n",a);
    printf("Value at a by pointer is %d",*p);


    return 0;
}

// int *p declares an integer pointer.
// &a stores the address of variable a in pointer p.
// *p accesses the value stored at that address.
// %p is used to print a memory address.