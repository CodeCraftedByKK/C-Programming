#include <stdio.h>
int main () {

    printf("Enter Size: ");
    int n;
    scanf("%d",&n);

    int arr[n];

    printf("Enter Array: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int sum = 0; 

    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    float avg = sum/n;

    printf("Sum of Array is %d \nAvg of Array is %f",sum,avg);



    return 0;
}