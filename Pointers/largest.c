#include <stdio.h>
int main () {

    int a;
    printf("Enter first Number: ");
    scanf("%d",&a);

    int b;
    printf("Enter second Number: ");
    scanf("%d",&b);

    int *p = &a;
    int *q = &b;

    if(*p>*q){
        printf("A is larger");
    }
    else{
        printf("B is larger");
    }



    return 0;
}
