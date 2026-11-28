#include <stdio.h>
int main () {

    int m,n;
    printf("Enter rows ");
    scanf("%d",&m);

    printf("Enter columns ");
    scanf("%d",&n);




    int arr[m][n];
    int brr[m][n];

    printf("Enter number of first matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }


    
    printf("Enter number of second matrix: \n");
    for(int i=0; i<m; i++){
         for(int j=0; j<n; j++){
            scanf("%d",&brr[i][j]);
         }
    }


     for(int i=0; i<m; i++){
         for(int j=0; j<n; j++){
           arr[i][j] = arr[i][j] + brr[i][j];
         }
    }


    printf("Sum of both matrix is : \n");
    for(int i=0; i<m; i++){
         for(int j=0; j<n; j++){
            printf("%d\n",arr[i][j]);
           
         }
    }






    return 0;
}