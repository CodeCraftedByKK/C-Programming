#include <stdio.h>
void arraySum(){
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
   printf("%d",sum);
}
int main () {
    printf("Enter size: ");
    arraySum();
    
    return 0;

}