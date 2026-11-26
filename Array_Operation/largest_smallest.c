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

    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }

        else if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Largest = %d\nSmallest= %d",max,min);


    return 0;
}