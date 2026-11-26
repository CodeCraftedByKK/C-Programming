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

    printf("Reverse array: ");
    for(int i=n-1; i>=0; i--){
        printf("%d",arr[i]);
    }



    return 0;
}