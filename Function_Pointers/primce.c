#include <stdio.h>

void prime(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }

       
    }

     if(count<=2){
            printf("Prime");
        }

        else if(count>2){
            printf("Not Prime");
        }
}

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    prime(n);

    

    return 0;
}