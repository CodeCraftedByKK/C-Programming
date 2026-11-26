// making a matrix, in which both rows and column are taken from user input

#include <stdio.h>
int main () {

    int n;
    
    printf("Enter Number of Rows: ");
    scanf("%d",&n);


    int m;
   
    printf("Enter Number of Columns: ");
    scanf("%d",&m);


    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }












    return 0;
}