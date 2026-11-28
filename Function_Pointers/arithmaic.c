#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int product(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}


int main () {
    int a;
    printf("Enter first Number: ");
    scanf("%d",&a);

    int b;
    printf("Enter Seconod NUmber: ");
    scanf("%d",&b);

    int sum = add(a,b);

    printf("%d",sum);




    return 0;
}