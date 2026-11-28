#include <stdio.h>
int large(int a, int b){
    if(a>b){
        printf("A is larger than b");
    }

    else{
        printf("B is larger than a");
    }
}
int main () {
    int a;
    printf("Enter first Number: ");
    scanf("%d",&a);

    int b;
    printf("Enter second Number: ");
    scanf("%d",&b);

    large(a,b);

    return 0;
}