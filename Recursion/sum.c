#include <stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);
}


int main () {
    
    printf("Enter n: ");
    int n;
    scanf("%d",&n);

    sum(n);

    printf("Sum is %d",sum(n));

    return 0;
}