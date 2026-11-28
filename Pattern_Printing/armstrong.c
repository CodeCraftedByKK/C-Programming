#include <stdio.h>
int main () {

    int n;
    scanf("%d", &n);

    int original = n;
    int sum = 0;
    int remainder;

    while(n!=0){
       remainder= n%10;

       sum = sum + remainder*remainder*remainder;
       n = n/10;
    }

    if(sum == original){
        printf("Armstrong number\n");
    }
    else{
        printf("Not an Armstrong number\n");
    }

    return 0;
}