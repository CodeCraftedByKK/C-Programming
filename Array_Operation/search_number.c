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

    printf("Enter target: ");
    int target;
    scanf("%d",&target);

    int found = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            printf("Target found at %d index",i);
            found = 1;
        break;
        }
        
    }

    if(found == 0){
        printf("Not Found ");
    }

    return 0;
}