#include <stdio.h>
int main () {

    printf("Enter first Number:");
    int n;
    scanf("%d",&n);

    printf("Enter Second Numeber: ");
    int m;
    scanf("%d",&m);

    int *p = &n;
    int *q = &m;

    int sum = *p + *q;

    printf("Sum is %d",sum);


    




    return 0;
}