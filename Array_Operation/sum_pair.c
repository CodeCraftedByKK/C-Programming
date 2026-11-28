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

    printf("Enter Sum : ");
    int x;
    scanf("%d",&x);

    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++ ){
            if(arr[i]+arr[j]==x){
                count++;
                printf("%d , %d \n",arr[i],arr[j]);
                
            }
        }
    }

    printf("Count = %d",count);


return 0;
}