#include <stdio.h>
int main () {

    int arr[3][3];

    printf("Enter 9 numbers : ");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    for (int j = 0; j < 3; j++) {        // outer: columns
    int colSum = 0;
    for (int i = 0; i < 3; i++) {    // inner: rows
        colSum = colSum + arr[i][j];
    }
    printf("Column %d sum = %d\n", j, colSum);
}

   




    return 0;
}