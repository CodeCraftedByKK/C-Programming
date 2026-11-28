#include <stdio.h>
int isEvenOdd(int n){
    if(n%2==0){
        printf("Even");
    }

    else{
        printf("Odd");
    }
}
int main () {
    printf("Enter any Number: ");
    int n;
    scanf("%d",&n);

    isEvenOdd(n);

    return 0;
}