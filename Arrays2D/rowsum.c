#include <stdio.h>
int main () {

    int matrix[3][3]= {{1,1,2},{2,3,4},{3,3,0}};

    for(int i=0; i<3; i++){
        int rowSum= 0;
        for(int j=0; j<3; j++){
            rowSum= rowSum + matrix[i][j];
        }

        printf("Row %d : Sum is %d\n",i,rowSum);
    }





    return 0;
}