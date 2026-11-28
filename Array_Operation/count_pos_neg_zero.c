#include <stdio.h>
int main () {
    int n;
    printf("Enter Size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Array: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int zeroCount = 0;
    int posCount = 0;
    int negCount = 0; 

    for(int i=0; i<n; i++){
        if(arr[i]>0){
            posCount++;
        }

        else if(arr[i]<0){
            negCount++;
        }

        else{
            zeroCount++;
        }

    }

    printf("Number of Positive Number is %d\nNumber of Negative Number is %d\nNumber of Zero is %d",posCount,negCount,zeroCount);
}