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

    printf("Enter Target: ");
    int target;
    scanf("%d",&target);

    int count =0;

    for(int i=0; i<n; i++){
        if(arr[i]>target){
            count++;
        }
    }

    printf("Greater than target is = %d",count);

    return 0;
}