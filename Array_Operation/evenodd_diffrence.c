#include <stdio.h>
int main () {
    int n;
    printf("Enter Size");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }


    int evenSum = 0;
    int oddSum = 0;

    for(int i=0; i<n; i++){
        if(i%2==0){
            evenSum = evenSum + arr[i];
        }

        else{
            oddSum= oddSum + arr[i];
        }
    }

    int diff = evenSum - oddSum;
    printf("%d",diff);
    return 0;
}