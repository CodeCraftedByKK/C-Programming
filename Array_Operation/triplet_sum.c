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

    printf("Enter target Sum ; ");

    int sum;
    scanf("%d",&sum);

    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    count++;
                    printf("%d,%d,%d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }

    printf("%d",count);

    return 0;
}