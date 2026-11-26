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

    int evenCount = 0;
    int oddCount = 0;

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evenCount++;
        }

        else {
            oddCount++;
        }
    }

    printf("Total Even number = %d\nTotal odd Number = %d",evenCount,oddCount);


    return 0;
}