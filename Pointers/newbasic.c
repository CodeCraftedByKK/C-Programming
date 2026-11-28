#include <stdio.h>
int main () {

    int a = 10;

    int *p = &a;

    int **r = &p;

    printf("Value of A is %d\n",a); // 10
    printf("Addess of A is %p \n",&a); // address of a
    printf("%d\n",*p); // 10 = value of a 
    printf("%p",**r);
    return 0;
}