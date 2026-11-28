#include <stdio.h>

int fact(int n){
   if(n==0){
    return 1;
   }
   return n * fact(n-1);
}
int main () {
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial is not defined for negative Numbers");
    }

    else{
        printf("Factorial of %d is %d",n,fact(n));
    }


    return 0;
}