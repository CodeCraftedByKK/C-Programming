#include <stdio.h>

// Krishnamurthy Number = Number whose sum of factorial of all digits is equal to that number;
// for eg = 2, 2! = 2
// 145= fact of 1 + fact of 4 + fact of 5 = 1 + 24 + 120 = 145;





int main () {

    int n,temp,digit,i,fact,sum = 0;
    scanf("%d",&n);
    printf("Enter Number: ");

    temp = n;

    while(n>0){
        digit = n%10;
        fact = 1;

        for(i=1; i<=digit; i++)

        fact = fact * i;

        sum = sum + fact;
        n = n/10;

    }


    if(sum==temp){
        printf("This Number is Krishnamurthy Number");

    }

    else{
        printf("This Number is not a Krishanmurthy Number");
    }







    return 0;
}