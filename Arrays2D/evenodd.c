#include <stdio.h>
int main () {

    int arr[3][3];

    printf("Enter 9 Numbers: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }


    int even = 0;
    int odd = 0;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           if(arr[i][j]%2==0){
            even++;
           }

           else{
            odd++;
           }
        
        }
    }

    printf("%d\n",even);
    printf("%d\n",odd);





    return 0;
}